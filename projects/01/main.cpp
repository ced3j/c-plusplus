#include <iostream>

using namespace std;


int main(){

    int myNumber;
    cout << "Enter a number: ";
    cin >> myNumber;

    if(myNumber < 0){
        cout << "Please do not enter negative numbers\n";
    }else{
        if(myNumber % 2 == 0){
            cout << myNumber << " is an even number\n";
        }else{
            cout << myNumber << " is an odd number\n";
        }
    }

    return 0;
}