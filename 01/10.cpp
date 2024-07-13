// Pointers and functions 2

#include <iostream>
using namespace std;

int multiplication(int x, int y){
    return x*y;
}

int addition(int x, int y){
    return x+y;
}

int main(){

    int (*func) (int, int);

    func = multiplication;
    cout << "x*y: " << func(7,10) << endl;

// same usage as above
    func = &addition;
    cout << "x+y: " << (* func)(10,20) << endl; 

    return 0;
}