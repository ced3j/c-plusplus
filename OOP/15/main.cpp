// Static Variable - Static attribute - Static method


#include <iostream>
using namespace std;

class Employee{
    public:
        static int workers; // Example of static attribute 
        Employee(){
            workers++;
        }

        static void showInfo(string n, int s){
            cout << "The name of worker is: " << n << "\n";
            cout << "The name salary of worker is: " << s << "\n";
        }
};



void print(){ // Example of static variable
    static int x = 7;
    x += 10;
    cout << "x: " << x << "\n";
}


int Employee::workers = 0; // To reach static attributes ""::"" 

int main(){
    Employee em1, em2, em3;
    cout << "Number of workers is: " << Employee::workers << "\n"; 
    print();
    print();
    print();

    Employee::showInfo("Derin", 1599);

    return 0;
}