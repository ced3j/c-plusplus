// Destructor
// Runs when the object's task is completed

#include <iostream>
using namespace std;



class myClass{
    public:
        int x;
        int y;
        myClass(){ // constructor
            cout << "Everything has just begun\n";
        }

        ~myClass(){ // destructor ~ 
            cout << "Everything is over\n"; 
        }
};



int main(){
    myClass myObj;
    cout << myObj.x << "\n";
    return 0;
}
