// Classes and Objects


#include <iostream>
#include <string>

using namespace std;


class BankAccount{ // BankAccount is a class, it's a type of object
    
    public: // these members are accessible from outside
        string name;
        int balance;

        void withdraw(int amount){
            balance = balance - amount;
        }

        void print(){
            cout << name << " has " << balance << " dollars (with print func)" << endl;
        }
};

int main(){

    BankAccount account1;
    account1.name = "Necip";
    account1.balance = 5390;

    cout << account1.name << " balance is: " << account1.balance << endl;


    BankAccount account2;
    account2.name = "Derin";
    account2.balance = 5;

    cout << account2.name << " has " << account2.balance << " dollars " << endl;



    account2.balance += 2455;

    cout << account2.name << " has " << account2.balance << " dollars (after)" << endl;

    account2.withdraw(500);
    account2.print();
    return 0;
}
