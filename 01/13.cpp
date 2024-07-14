// Access modifiers

#include <iostream>
using namespace std;


class Example{
    public:
        int publicVar;

        Example(){
            publicVar = 1;
            privateVar = 2;
            protectedVar = 3;
        }

        void publicMethod(){
            cout << "Public Method" << endl;
            cout << "privateVar: " << privateVar << endl; // Accessible within the class
            cout << "protectedVar: " << protectedVar << endl; // Accessible within the class
        }


    // These members are only accessible within the class itself.
    private: 
        int privateVar;

        void privateMethod(){
            cout << "Private Method"<< endl;
        }

    // These members are accessible within the class and in derived classes
    protected:
        int protectedVar;

        void protectedMethod(){
            cout << "Protected method" << endl;
        }
};

int main(){

    Example obj;

    // Public members
    obj.publicVar = 10; // Allowed
    obj.publicMethod(); // Allowed


    // Private members
    // obj.privateVar = 20; // Not allowed
    // obj.privateMethod(); // Not allowed


    // Accessing protected members
    // obj.protectedVar = 30; // Not allowed
    // obj.protectedMethod(); // Not allowed

    return 0;
}