// This keyword

#include <iostream>
using namespace std;

// base class
class Employee{
    private:
        string name;
        int salary;
    public:
        Employee(string name, int salary){
            this->name = name;
            this->salary = salary;
        }
        void setName(string name){
            this->name = name;
        }
        void setSalary(int salary){
            this->salary = salary;
        }

        string getName(){
            return name;
        }

        int getSalary(){
            return salary;
        }
};


int main(){

    Employee e1("Derin", 1000);
    cout << "name: " << e1.getName() << "\n";
    cout << "salary: " << e1.getSalary() << "\n";

    return 0;
}