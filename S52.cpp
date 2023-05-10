#include <iostream>
using namespace std;

void print(int a){
    cout << a << endl;
}
void print(double a){
    cout << a << endl;
}
void print(char *a){
    cout << a << endl;
}
void print(int a1, int a2){
    cout << a1 << " и " << a2 << endl;
}

int main(){
    setlocale(LC_ALL, "RUSSIAN");
    print(15), print(2.4), print("Слово"), print(22,38);
    return 0;
}
