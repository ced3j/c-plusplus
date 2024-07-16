// Encapsulation


#include <iostream>
using namespace std;


class Employee{
    private:
        int salary; // The user cannot change this externally
    public:
        void setSalary(int x){
            salary = x;
        }

        int getSalary(){
            return salary;
        }
};

// These set and get operations are generally called "encapsulation"


int main(){

    Employee em1;
    em1.setSalary(35600);
    
    cout << em1.getSalary() << endl;

    return 0;
}