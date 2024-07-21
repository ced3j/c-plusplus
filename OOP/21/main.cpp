// Structures with functions

#include <iostream>
using namespace std;

struct Person{
    string name;
    int age;
    float height;
};


void displayPerson(Person p){
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
    cout << "Height: " << p.height << endl;
}


// Functon to create a person and return the structure
Person createPerson(string name, int age, float height){
    Person p;
    p.name = name;
    p.age = age;
    p.height = height;
    return p;
}


int main(){

    Person person1 = createPerson("Derin", 3, 52);
    displayPerson(person1);


    return 0;
}