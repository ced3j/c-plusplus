// Basic calculator


#include <iostream>

using namespace std;

void add();
void subtract();
void multiply();
void divide();

int main(){
    int choice;
    do{
        cout << "====== Simple Calculator Menu ======\n";
        cout << "1. Add\n"; 
        cout << "2. Subtract\n";
        cout << "3. Multiply\n";
        cout << "4. Divide\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice == 1){
            add();
        }else if(choice == 2){
            subtract();
        }else if(choice == 3){
            multiply();
        }else if(choice == 4){
            divide();
        }else if(choice == 5){
            cout << "Exiting...\n";
        }else{
            cout << "Invalid Choice!\n";
        }

    } while(choice != 5);

    return 0;
}


void add(){
    double num1, num2;
    cout << "Enter two numbers to add: ";
    cin >> num1 >> num2;
    cout << "Result: " << num1 + num2 << endl;
}

void subtract(){
    double num1, num2;
    cout << "Enter two numbers to subtract: ";
    cin >> num1 >> num2;
    cout << "Result: " << ((num1 > num2) ? (num1 - num2) : (num2 - num1)) << endl; 
}

void multiply(){
    double num1, num2;
    cout << "Enter two numbers to multiply: ";
    cin >> num1 >> num2;
    cout << "Result: " << num1*num2 << endl;
}

void divide(){
    double num1, num2;
    cout << "Enter two numbers to divide: ";
    cin >> num1 >> num2;
    cout << "Result: " << ((num1 > num2) ? (num1 / num2) : (num2 / num1)) << endl;
}