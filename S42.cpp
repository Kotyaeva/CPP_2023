#include <iostream>
using namespace std;

void sort(int *massive);
int main(){
int a[10] = {45, 34, 87, 98, 5, 6, 7, 21, 5, 10};
sort(a);

return 0;
}


void sort(int *massive){
int number=0;
int length=10;

for (int i=0;i<length;i++){
        for (int j=1+i;j<length;j++){
        if (massive[i] < massive[j]){
            number = massive[i];
            massive[i] = massive[j];
            massive[j] = number;
        }
        else if (massive[i] == massive[j]) {
            massive[i] = massive[length-1];
            length--;
        }
 }
cout << massive[i] << " ";
 }
 }
