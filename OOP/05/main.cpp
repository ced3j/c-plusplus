#include <iostream>
using namespace std;

class MyClass{ // defauls specifier is "private"
    public:  
        int message(){
            return x+y;
        }
    
    private: // Only accessible from current class
        int x = 7;


    protected: // Cannot be accessed from outside, inherited class can access it
        int y = 10;
};


int main(){
    MyClass myObj;
    cout << myObj.message() << "\n";

    return 0;
}