// Void pointer

#include <iostream>
using namespace std;

void showMe(void* ptr, char type);

int main(){
    int number = 70;
    float number2 = 3.14;
    double number3 = 35.395392;
    char letter = 'F';

    showMe(&number, 'i');
    showMe(&letter, 'c');
    // ...
    
    return 0;
}

void showMe(void* ptr, char type){
    if(type == 'i'){
        cout << "int: " << *((int *)ptr) << endl;
    }else if(type == 'c'){
        cout << "char: " << *((char *)ptr) << endl;
    }
}