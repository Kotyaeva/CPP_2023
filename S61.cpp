#include <iostream>
using namespace std;

class Bucket{ // класс ведра
public:
    int volume; // объём ведра в литрах
    int used; // объем налитой в ведро жидкости
    Bucket(int volume_, int used_){ // конструктор Bucket инициализирует volume и used
    volume = volume_;
    used = used_;
    }
    int fill(int v); // определяем функцию-член для наполнения ведра жидкостью объемом v
    int flush(); // определяем функцию-член для опустошения ведра
};

int Bucket::fill(int v){
    if (v >= (volume - used)){ // задаем условие, в котором проверяем, хватает ли места в ведре для жидкости
        v -= (volume - used); // если не хватает, то возвращаем разницу,
        used = volume; // а ведро заполняется до макс. возможного
    }else{
        used += v; // если хватает, то ведро наполняется на v литров жидкости
        v = 0;
    }
return v;
}
int Bucket::flush(){ // опустошаем ведро
    used = 0;
}

int main(){ // тестовый код
    setlocale(LC_ALL, "Russian");
    Bucket test_01(12, 3);
    cout << "1) " << test_01.volume << ", " << test_01.used << "\n"; // 12, 3
    int rest = test_01.fill(14);
    cout << "2) " << test_01.used << ", " << rest << "\n";  // 12, 5

    test_01.flush();
    rest = test_01.fill(8);
    cout << "3) " << test_01.used << ", " << rest << "\n";   // 8, 0
}
