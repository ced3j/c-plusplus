// virtual methods

#include <iostream>
using namespace std;


class Animal{
    public:
        virtual void Sound() = 0;
};

class Dog:public Animal{
    public:
        void Sound(){
            cout << "The dog says: hav hav\n";
        }
};

class Cat:public Animal{
    public:
        void Sound(){
            cout << "The dog says: miyav miyav\n";
        }
};

class Cow:public Animal{
    public:
        void Sound(){
            cout << "The dog says: moooo\n";
        }
};

class Sheep:public Animal{
    public:
        void Sound(){
            cout << "The dog says: meeeee\n";
        }
};



void AnimalSound(Animal* ptr){
    ptr->Sound();
}


int main(){
    Dog dg;
    Cat ct;
    Cow cw;
    Sheep sh;
    AnimalSound(&dg);
    AnimalSound(&ct);
    AnimalSound(&cw);
    AnimalSound(&sh);



    return 0;
}