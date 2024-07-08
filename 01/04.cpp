// cin examples

#include <iostream>

using namespace std;

int main(){

    int x;
    cout << "Enter an integer";
    cin >> x;
    cout << "You entered the integer: " << x << endl;

    double height = 0;
    double width = 0;
    double area = 0;

    cout << "Enter height and width (separated by space): ";
    cin >> height >> width;
    area = height * width;
    cout << height << " x " << width << " = " << area << endl;


    return 0;
}