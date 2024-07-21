// Abstraction

#include <iostream>
using namespace std;

// Car class definition
class Car {
private:
    // Private members (hidden details)
    string engineType;
    int fuelLevel;

public:
    // Constructor to initialize the car
    Car(string engine, int fuel) {
        engineType = engine;
        fuelLevel = fuel;
    }

    // Public member function to start the car (interface)
    void startCar() {
        if (fuelLevel > 0) {
            cout << "Car with " << engineType << " engine is starting." << endl;
        } else {
            cout << "Cannot start the car. Fuel is empty!" << endl;
        }
    }
};

int main() {
    // Create a Car object
    Car myCar("V8", 10);

    // Start the car using the public interface
    myCar.startCar();

    return 0;
}
