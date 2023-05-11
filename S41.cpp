#include <iostream>
using namespace std;

double squared_sum(double A, double B){
    double c;
    c=(A+B)*(A+B);
    return c;
}

int main(){
    setlocale(LC_ALL, "Russian");
    double A, B;
    cout<<"Введите число A: ";
    cin>>A;
    cout<<"Введите число B: ";
    cin>>B;
    cout<<"Квадрат суммы равен: "<<squared_sum(A, B);
    return 0;
}
