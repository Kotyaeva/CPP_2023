#include <iostream>
#include <string>

using namespace std;

int main(){
    
    setlocale(LC_ALL, "Russian");
    string m[10] = {"ноль","Один", "два", "три", "четыре", "пять", "шесть", "семь", "восемь", "девять"};
    int number;
    cout<<" введите число от 0 до 9: ";
    cin>>number;
    if ((number<0)||(number>9)){
            
    cout<<"Данное число не входит в диапазон от 0 до 9!!!"<<endl;
}

    int len=sizeof(m)/sizeof(m[0]);
    for(int i=0; i<=len; ++i){
    if (i==number){
    
    cout<<m[i]<<endl;
    return 0;
}
}
}
