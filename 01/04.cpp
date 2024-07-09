#include <iostream>
#include <string>

using namespace std;

int main(){

    int x;
    cout << "Enter an integer: ";
    cin >> x;
    cout << "You entered the integer: " << x << endl;

    double height = 0;
    double width = 0;
    double area = 0;

    cout << "Enter height and width (separated by space): ";
    cin >> height >> width;
    area = height * width;
    cout << height << " x " << width << " = " << area << endl;

    // ----------- 

    int a;
    cout << "Enter an integer: ";
    if(cin >> a){
        cout << "You entered the integer " << a << endl;
    }else{
        cin.clear();
        cout << "Invalid Input!" << endl; 
    }

    // -----------

    cin.ignore(); // Add this line to clear the newline character from the input buffer

    string name;
    cout << "Enter your name: \n";
    getline(cin, name); // getline: for longer inputs --> forexample: cin>> "John" --- getline "John Doe"
    cout << "Hello " << name << "!" << endl;

    return 0;
}
