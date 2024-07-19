// Objects and Pointers

#include <iostream>
using namespace std;


class Employee{
    public:
        string* name;
        int* salary;
        Employee(string n, int s){ // Constructor
            name = new string;
            salary = new int;
            *name = n;
            *salary = s;
        }
        ~Employee(){ // Destructor
            delete name; // deleting variables from memory when I'm done with them
            delete salary;
        }

        void showInfo(){
            cout << "Name: " << *name << "\n";
            cout << "Salary: " << *salary << "\n";
        }
};

int main(){

    // Employee* em = new Employee();
    // em->setName("Derin");
    // em->setSalary(15000);
    // cout << "Name: " << em->getName() << "\n";
    // cout << "Salary: " << em->getSalary() << "\n";



    // After constructor:
    // Employee em("Derin", 1500);
    // getObject(&em);



    Employee* em = new Employee("Derin", 1500);
    em->showInfo();
    delete em; // deleting from memory when I'm done with this

    return 0;
}