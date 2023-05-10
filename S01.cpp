#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(0,"Russian");
    int a = 10;
    char b = 'F';
    bool c = true;
    float d = 2.5;
    cout << "переменная целого типа:" << "a=" << a << '\n';
    cout << "символьная переменная:" << "b=" << b << "; b=" << int(b) << '\n';
    cout << "логическая переменная:" << "c=" << c << '\n';
    cout << "переменная с плавающей точкой:" << "d=" << d << '\n';
    int sum = a+int(c);
    float dif = a-d;
    int mul = d*int(b);
    int div = int(b)/a;
    cout <<"Сложение: " <<"a+c=" << sum << '\n';
    cout <<"Вычитание: "<< "a-d=" << dif << '\n';
    cout <<"Умножение: " <<"d*b=" << mul << '\n';
    cout << "Деление : "<<b/a=" << div << '\n';

    return 0;
}
