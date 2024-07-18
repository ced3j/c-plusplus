// Inheritance

#include <iostream>
using namespace std;


class Vehicle{
    private:
        int numberPrivate = 7;
    
    protected:
        int numberProtected = 10;

    public:
        string brand = "Skoda";
        void message(){
            cout << "My car is ";
        }
};



// We created a class that named Car
// And inherited from Vehicle
// We can't use private attributes on here
// We can use protected attributes
class Car: public Vehicle{
    public:     
        string model = "Octavia";
        void messageCar(){
            cout << numberProtected << endl;
        }
};



int main(){

    Car myCar;
    myCar.messageCar();
    myCar.message();

    cout << myCar.brand + " " + myCar.model << "\n";


    return 0;
}