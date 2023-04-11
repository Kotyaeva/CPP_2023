#include <iostream>
#include <fstream>
using namespace std;

    int main() {
    setlocale(LC_ALL, "Russian");
    int A,B;
    cout<<"Число A: ";
    cin>> A;
    cout<<(" Число B ( больше числа A): ");
    cin>> B;
    if (B<A)
        {
        cout<<"Число A больше числа B"<<endl;
        }
    ofstream out;
    out.open("output.txt");
    for (int i=A; i<=B; ++i)
        {
    out<<i*3<<endl;
        }
    return 0;
    out.close();
    }
