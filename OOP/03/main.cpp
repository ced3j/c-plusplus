// Contructor

#include <iostream>

using namespace std;

class MathOperations{
    public:
        int number1, number2;
        MathOperations(int x, int y){
            number1 = x;
            number2 = y;
        }

        int addition(){
            return number1 + number2;
        }

        int subtraction(){
            return number1 - number2;
        }

        int multiplication(){
            return number1 * number2;
        }

        int division(){
            return number1 / number2;
        }

        void getData(){
            cout << addition() << endl;
            cout << subtraction() << endl;
            cout << multiplication() << endl;
            cout << division() << endl;
            cout << "----------" << endl;
        }

};


int main(){
    MathOperations myObj(10, 5);

    cout << myObj.addition() << endl;
    cout << myObj.subtraction() << endl;
    cout << myObj.multiplication() << endl;
    cout << myObj.division() << endl;

    MathOperations myObj2(20, 4);
    myObj2.getData();


    return 0;
}