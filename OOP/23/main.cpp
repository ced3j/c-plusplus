// Struct typedef, Struct arrays

#include <iostream>
using namespace std;

typedef struct{
    string name;
    int age;
    float height;
} Person;



int main(){
    Person people[3] = {
        {"Alice", 30, 5.5},
        {"Derin", 3, 1.2},
        {"Max", 28, 4.8}
    };

    for(int i = 0; i < 3; ++i){
        cout << "Person: " << i+1 << ": " << endl;
        cout << "Name: " << people[i].name << endl;
        cout << "Age: " << people[i].age << endl;
        cout << "Height: " << people[i].height << "\n" << endl;
    }

    return 0;
}