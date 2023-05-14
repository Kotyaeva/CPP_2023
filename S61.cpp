#include <iostream>
using namespace std;

class Bucket{
public:
    int volume;
    int used=0;

    Bucket(int v, int u);
    int fill(int v);
    void flush(){used=0; cout<<"Ведро пустое."<<endl;};
};

Bucket::Bucket(int v, int u){
    volume=v; used=u;
    cout<<"В ведре всего "<<v<<" литров, используется: "<<u<<"."<<endl;
}

int Bucket::fill(int v){
    if (v>(volume-used)){
        v=v-(volume-used);
        used=volume;
        cout<<"В ведре "<<volume<<" литров, не вместилось: "<<v<<"."<<endl;
    }
    else{
        used=used+v;
        v=0;
        cout<<"В ведре "<<used<<" литров."<<endl;
    }
    return v;
}

int main(){
    setlocale(0, "Russian");
    Bucket test_01(12, 3);
    test_01.fill(14);
    test_01.flush();
    test_01.fill(8);
}
