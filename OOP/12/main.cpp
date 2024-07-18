// Overloading 

#include <iostream>
using namespace std;

class Employee{
    private:
        string name;
        int salary;
        double code;
    public:
        Employee(){ // Constructor
            name = "Derin";
            salary = 3500;
            code = 1.52;
        }

        Employee(int s){ // Class overloading
            name = "Derikko";
            salary = s;
            code = 6.19;
        }

        Employee(int s, double c){ // Class overloading
            name = "Derikk";
            salary = s;
            code = c;
        }

        Employee(int s, double c, string n){ // Class overloading
            name = n;
            salary = s;
            code = c;
        }

        void print(){
            cout << "name: " << name << "\n";
            cout << "salary: " << salary << "\n";
            cout << "code: " << code << "\n";
            cout << "-------------------\n";

        }



};



int main(){

    Employee e1;
    e1.print();
    
    Employee e2(10500);
    e2.print();

    Employee e3(3400, 10.5);
    e3.print();

    Employee e4(3400, 10.5, "TestName");
    e4.print();

    return 0;
}