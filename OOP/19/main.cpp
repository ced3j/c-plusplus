#include <iostream>
using namespace std;

// Base Class
class Vehicle{
    public:
        void displayType(){
            cout << "This is a vehicle." << endl;
        }

};

class Car : public Vehicle{
    public:
        void displayBrand(){
            cout << "This is a car." << endl;
        }
};


int main(){
    // create an object of the derived class
    Car myCar;

    // Call the function from the base class using the derived class object
    myCar.displayType();

    // Call the function from the derived class
    myCar.displayBrand();

    return 0;
}