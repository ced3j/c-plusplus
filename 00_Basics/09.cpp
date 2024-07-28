// Pointers and functions 1

#include <iostream>

void replaceValue(int* ptr);
float getSquare(float* ptr);

using namespace std;

int main(){

    int x = 10;
    cout << "value of variable x is " << x << "\n";
    replaceValue(&x);
    cout << "x after pointer: " << x << "\n\n";

    float m = 25.5;

    cout << "after pointers: m --> " << getSquare(&m) << endl;
    cout << m << endl;

    return 0;
}


void replaceValue(int* a){
    *a = 20;
}


float getSquare(float* ptr){
    return (*ptr) * (*ptr);
}