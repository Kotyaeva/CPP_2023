#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    int a=1, b=0;
    while(a<=1000){
            a=a+4;
    if(a<=1000)
        if(a%7==0){b=b+a;}
    else{b=b;}
    }
    cout<<"Сумма чисел равна: "<<b<<endl;
    return 0;
    }
