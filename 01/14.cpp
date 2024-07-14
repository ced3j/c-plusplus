// Bank Account example to learn private members

#include <iostream>
using namespace std;


class BankAccount{
    private: 
        double balance;

    public:
        // Constructor to initialize balance
        BankAccount(double initialBalance){
            if(initialBalance >= 0){
                balance = initialBalance;
            }else{
                balance = 0;
                cout << "initial balance cannot be negative. Setting balance to 0" << endl;
            }
        }

    double getBalance(){
        return balance;
    }

    // Public method to deposit money
    void deposit(double amount){
        if(amount > 0){
            balance += amount;
            cout << "Deposited: " << amount << ". New balance: " << balance << endl;
        }else{
            cout << "Deposit amount must be positive." << endl;
        }
    }

    void withdraw(double amount){
        if(amount > 0 && amount <= balance){
            balance -= amount;
            cout << "Withdrew: " << amount << ". New balance: " << balance << endl;
        }else if(amount > balance){
            cout << "Insufficient funds. Withdrawal denied." << endl;
        }else{
            cout << "Withdrawal amount must be positive." << endl;
        }
    }
};



int main(){
    BankAccount myAccount(100.0); // Create account with initial balance of 100.0

    cout << "Current balance: " << myAccount.getBalance() << endl;

    myAccount.deposit(50.0); // Deposit 50.0
    myAccount.withdraw(30.0); // Withdraw 30.0
    myAccount.withdraw(150.0); // Attempt to withdraw more than the balance

    // Direct access to balance is not allowed
    // myAccount.balance = 500; // This line would cause a compilation error
    return 0;
}