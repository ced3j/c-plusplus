// Student Grade Manager

#include <iostream>

using namespace std;

const int MAX_STUDENTS = 30;

void addGrade(int grades[], int &numGrades, int grade);
void displayGrades(const int grades[], int numGrades);
double calculateAverage(const int grades[], int numGrades);

int main(){

    int grades[MAX_STUDENTS];
    int numGrades = 0;
    int choice;

    do{
        cout << "Student Grade Manager Menu:\n";
        cout << "1. Add a grade\n";
        cout << "2. Display grades\n";
        cout << "3. Calculate average grade\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice == 1){
            int grade;
            cout << "Enter grade: ";
            cin >> grade;
            addGrade(grades, numGrades, grade);
        }else if(choice == 2){
            displayGrades(grades, numGrades);
        }else if(choice == 3){
            double average = calculateAverage(grades, numGrades);
            cout << "Average grade: " << average << endl;
        }else if(choice == 4){
            cout << "Exiting..." << endl;
        }else{
            cout << "Invalid choice." << endl;
        }

    }while(choice != 4);

    return 0;
}


void addGrade(int grades[], int &numGrades, int grade){
    if(numGrades < MAX_STUDENTS){
        grades[numGrades++] = grade;
    }else{
        cout << "Grade list is full!\n";
    }
}

void displayGrades(const int grades[], int numGrades){
    if(numGrades == 0){
        cout << "No grades to display!\n";
        return;
    }else{
        for(int i = 0; i < numGrades; i++){
            cout << grades[i] << " ";
        }
        cout << endl;
    }
}


double calculateAverage(const int grades[], int numGrades){
    if(numGrades == 0) return 0.0;
    int sum = 0;
    for(int i = 0; i < numGrades; ++i){
        sum += grades[i];
    }
    return static_cast<double>(sum) / numGrades;
}