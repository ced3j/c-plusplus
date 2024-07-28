#include <iostream>
using namespace std;


class DortIslem{
    public: // access specifier
        int number1; // attribute
        int number2; // attribute
        string myName; // attribute 

        void run(){ // method
            cout << myName << " is running" << endl;
        }

        void wait(){ // method
            cout << myName << " stoped" << endl;
        }
};


int main(){
    // OOP: object oriented programming

    DortIslem myObject1; // object created
    myObject1.number1 = 7;
    myObject1.number2 = 10;
    myObject1.myName = "Derin";

    cout << myObject1.number1 << endl;



    DortIslem myObject2;
    myObject2.number1 = 25;
    myObject2.number2 = 55;
    myObject2.myName = "Betel";

    cout << myObject2.number1 << endl;

    myObject2.run();

    return 0;
}