#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    int a, b;
        a=13;
        b=5;
    cout << "деление a и b:" <<a / b<< endl;
    cout<<"остаток от целочисленного деления:"<<a%b;
return 0;
}
