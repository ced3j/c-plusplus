// Inheritance examples
// Multilevel inheritance



#include <iostream>
using namespace std;


class Father{
    public:
        void myMethod(){
            cout << "Grandchild --> Son --> Father\n";
        }
};


// Son inherited from Father
class Son{
    protected:
        int number = 7;
};



// GrandChil inherited from Son
class GrandChild:public Son{
    public:
        string name = "Max";

    int getValue(){
        return number;
    }
};

class Derin:public Father, public Son{
    private:
        string name = "Derin";

    public:
        int getValue(){
            return number *= 4;
       }
};




int main(){
    Derin myObj;
    myObj.myMethod();
    
    cout << myObj.getValue() << endl;


    Derin deriko;
    cout << "Derin's number: " << deriko.getValue() << endl;

    return 0;
}