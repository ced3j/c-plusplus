/*
Templates in C++ are a powerful feature that allows 
you to write generic and reusable code. With templates,
you can create functions and classes 
that work with any data type. This avoids 
code duplication and makes your code more flexible.
 */

#include <iostream>
using namespace std;

// Function template
template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    // Using the template function with different data types
    cout << "Integer addition: " << add(3, 4) << endl;         // int
    cout << "Float addition: " << add(3.5, 4.5) << endl;      // float
    cout << "Double addition: " << add(3.14, 2.71) << endl;   // double

    return 0;
}


/*

Template Declaration: template <typename T> declares a template. T is a placeholder for the data type.
Template Function: T add(T a, T b) is a function template. The type T will be replaced by the actual data type when the function is called.
Main Function:
add(3, 4) calls the template function with int type.
add(3.5, 4.5) calls the template function with float type.
add(3.14, 2.71) calls the template function with double type.




 */