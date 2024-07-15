#include <iostream>
using namespace std;


class Car{
    public:
        string brand;
        string model;
        int year;

        // void message(){
        //     cout << "Hello C++ OOP!\n";
        // }

        void message();

        int speed(int mySpeed){
            return mySpeed;
        }


        Car(string b, string m, int y){ // constructor method
            brand = b;
            model = m;
            year = y; 
        }

};


void Car::message(){
    cout << "Hello C++ OOP!\n";
}



int main(){

    // Car c1;
    // c1.brand = "Skoda";
    // c1.model = "Superb";
    // c1.year = 2001;


    Car c1("Skoda", "Superb", 2001);



    Car c3("test", "test3", 2000);

    cout << c3 << endl;
    return 0;
}