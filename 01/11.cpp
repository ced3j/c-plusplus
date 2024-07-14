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


/*

(int *)ptr - This statement converts a void* pointer to an int* pointer. 
This means that the ptr pointer now points to data of type int.

*((int *)ptr) - Here, with (int *)ptr, we convert the type of the ptr pointer to 
int* and then prefix it with * to get the value pointed to by this pointer. This allows us to get a value of type int.

*/