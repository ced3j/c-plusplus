#include <iostream>
using namespace std;

struct node{
    int data;
    struct node * next;  // the next node
};

int main() {

    struct node* n1 = new node(); // the first node I created
    n1->data = 11;


    struct node* n2 = new node();
    n2->data = 22;
    

    struct node* n3 = new node();
    n3->data = 33;


    n1->next = n2;
    n2->next = n3;
    n3->next = NULL; // This is the most important feature of singly linked list 
    // The last node must be bound to NULL 

    struct node* temp = n1;

    while(temp != NULL){
        cout << temp->data << "    ";
        temp = temp->next;
    }


    return 0;
}
