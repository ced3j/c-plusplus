// Modular programming

#include <iostream>
#include "functions/print.h"
#include "classes/myclass.h"

using namespace std;


int main(){
    
    message();
    myclass myObj;
    myObj.myMethod();
    cout << myObj.myName << "\n";
    cout << myObj.number << "\n";

    return 0;
}