#include <iostream>

using namespace std;

const int MAX_NUMBERS = 10;

void addNumber(int numbers[], int &numCount, int number){
    if(numCount < MAX_NUMBERS){
        numbers[numCount++] = number;
    }else{
        cout << "Array is full!" << endl;
    }
}



int calculateSum(const int numbers[], int numCount){
    int sum = 0;
    for(int i = 0; i < numCount; i++){
        sum += numbers[i];
    }

    return sum;
}


void displayNumbers(const int numbers[], int numCount){
    if(numCount == 0){
        cout << "No numbers to display" << endl;
        return;
    }
    cout << "Numbers: ";
    for(int i = 0; i < numCount; ++i){
        cout << numbers[i] << " ";
    }
    cout << endl;
}


int main(){
    int numbers[MAX_NUMBERS];
    int numCount = 0;
    int choice;

    do{
        cout << "Menu:\n";
        cout << "1. Add a number\n";
        cout << "2. Calculate sum of numbers\n";
        cout << "3. Display all numbers\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice == 1){
            int number;
            cout << "Enter number: ";
            cin >> number;
            addNumber(numbers, numCount, number);
        }else if(choice == 2){
            int sum = calculateSum(numbers, numCount);
            cout << "Sum of numbers: " << sum << endl;
        }else if(choice == 3){
            displayNumbers(numbers, numCount);
        }else{
            if(choice == 4){
                cout << "Exiting...";
            }else{
                cout << "Invalid choice. Please try again :)" << endl;
            }
        }
    }while(choice != 4);

    return 0;
}