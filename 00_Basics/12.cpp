// OOP 1

#include <iostream>

using namespace std;

class Car{
    public:
        // std::string Name;
        string Brand;
        string Model;
        int Year;

        void displayInfo(){
            cout << "Brand: " << Brand << ", Model: " << Model << ", Year: " << Year << endl;
        }
};


int main(){
    Car car1;
    car1.Brand = "Toyota";
    car1.Model = "Hilux";
    car1.Year = 1998;

    car1.displayInfo();

    return 0;
}