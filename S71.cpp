#include <iostream>
#include <math.h>
using namespace std;

class CreditCard{
public:
    int Number;
    float Balance;

    CreditCard(int a, int b);
    void Put(int v);
    void Take(int v);
    void show_balance();
};

CreditCard::CreditCard(int a, int b){
    Number=1234;    Balance=50;
    Number=a;   Balance=b;
}

void CreditCard::Put(int v){
    Balance=Balance+v;
    cout<<"Пополнение счета. Текущий баланс карты: "<<Balance<<endl;
}

void CreditCard::Take(int v){
    Balance=Balance-v;
    cout<<"Списание со счета. Текущий баланс карты: "<<Balance<<endl;
}

void CreditCard::show_balance(){
    cout<<"Номер кредитной карты: "<<Number<<endl;
    cout<<"Баланс кредитной карты: "<<Balance<<endl;
}

int main() {
    setlocale(LC_ALL, "Russian");
    CreditCard cc1(1234, 50);
    CreditCard * note;
    note = &cc1;
    note->show_balance();
    note->Put(20);
    note->Take(50);
}
