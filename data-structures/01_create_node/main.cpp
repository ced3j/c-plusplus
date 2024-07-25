// Create Node with struct


#include <iostream>
using namespace std;


struct node{
    int data;
    struct node * next; // Points to the next node
}; 


int main(){

    // Created first node 
    // reserved space in memory
    struct node * n1 = new node();

    struct node * n2 = new node();
    struct node * n3 = new node();
    
    n1->data = 15; // node datas
    n2->data = 20;
    n3->data = 25;


    n1->next = n2; // we connect the nodes to each other
    n2->next = n3;
    n3->next = NULL;
    
    
    // temporary node
    struct node * temp = n1;

    while(temp != NULL){
        cout << temp-> data << " " ;
        temp = temp->next;
    } 


    return 0;
}