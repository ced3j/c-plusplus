// Pointers

#include <iostream>
using namespace std;

int main(){

    int x = 7;
    int * ptr = &x;

    cout << x << "\n";
    cout << &x << "\n";
    cout << ptr << "\n";
    cout << *ptr << "\n";


    string food = "pizza";
    string* ptrs = &food;

    cout << food << "\n";
    cout << *ptrs << "\n"; 
    cout << &ptrs << "\n"; 

    return 0;
}