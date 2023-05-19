#include <iostream>
#include <string>
using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    string a;
    cout << "Введите слово: ";
    cin >> a;
        for (int i = a.size() - 1; i >= 0; i--){
        cout << a[i];
        }

    return 0;
}
