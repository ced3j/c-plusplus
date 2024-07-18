// Overloading in OOP

#include <iostream>
using namespace std;

class PrintData{
    public:
        void print(int valueInt){
            cout << "Printing int: " << valueInt << "\n";
        }
        void print(double valueDouble){
            cout << "Printing float: " << valueDouble << "\n";
        }
        void print(string valueString){
            cout << "Printing string: " << valueString << "\n";
        }
};

int main(){

    PrintData pd;
    pd.print(10);
    pd.print(50.3);
    pd.print("String");

    return 0;
}