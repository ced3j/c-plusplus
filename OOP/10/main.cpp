#include <iostream>
using namespace std;


class Employee{
    protected:
        int salary = 30000;
};



class Person: public Employee{
    public:
        int bonus;
        int getSalary(){
            return salary;
        }

        void setSalary(){
            salary += bonus;
        }
};



int main(){
    Person p1;
    p1.bonus = 12000;

    

    cout << "Salary before: " << p1.getSalary() << endl;
    p1.setSalary();

    cout << "Salary after: " << p1.getSalary() << endl;
    cout << "Bonus: " << p1.bonus << endl;

    return 0;
}