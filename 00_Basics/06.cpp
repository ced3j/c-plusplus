// String

#include <iostream>
#include <string>

using namespace std;

int main(){
    string test1 = "abcdefghi";
    cout << test1 << endl;

    cout << "size: " << test1.size() << endl; // 9

    cout << "test1[0]: " << test1[0] << endl; // a

    cout << "test1.at(3): " << test1.at(3) << endl; // d 

    test1[2] = 'x';
    cout << test1 << endl;

    test1 = test1 + "1234";
    cout << test1 << endl;


    test1.append("APPEND");
    cout << test1 << endl;

    cout << "length of string: " << test1.length() << endl;
    string test3;

    if(test3.empty()) cout << "test3 is empty" << endl;

    return 0;
}