#include <iostream>
#include <math.h>
using namespace std;

int pl(int B, int C){
    float  S=0;
    double const pi=3.14159265359;
        S=(B*B*C)/(4*(tan(pi/C)));
        cout<<"Площадь "<<C<<"-угольника со стороной "<<B<<" равна "<<S<<endl;
    return S;
}

int main(){
    setlocale(LC_ALL, "Russian");
        int A, N;
        cout<<"Введите сторону A: ";
        cin>>A;
        cout<<"Введите число сторон N: ";
        cin>>N;
            pl(A, N);
}
