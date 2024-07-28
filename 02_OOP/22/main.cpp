// Nested Structures

#include <iostream>
using namespace std;

struct Adress{
    string street;
    string city;
    int zipCode;
};

struct Person{
    string name;
    int age;
    Adress address; // nested part
};

int main(){

    Person person1;

    person1.name = "Derin";
    person1.age = 3;
    person1.address.street = "123 Main st";
    person1.address.city = "Berlin";
    person1.address.zipCode = 100;

    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;
    cout << "Address: " << person1.address.street << ", " << person1.address.city << ", " << person1.address.zipCode << endl;
    return 0;
}