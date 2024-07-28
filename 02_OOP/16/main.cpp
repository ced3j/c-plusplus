// friend function and class

#include <iostream>
using namespace std;

class Employee{
    private:
        string name;
        int salary;
    public:
        Employee(string name, int salary){
            this->name = name;
            this->salary = salary;
        }
        friend void Print(Employee em);
        friend class Worker;
};


class Worker{
    public:
        void Print(Employee em){
            cout << "Name: " << em.name << "\n";
            cout << "Salary: " << em.salary << "\n"; 
        }
};


void Print(Employee em){
    cout << "Name: " << em.name << "\n";
    cout << "Salary: " << em.salary << "\n";
}

int main(){

    Employee em("Derin", 300);
    Print(em);
    return 0;
}