//inserting in circular linked list

#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int value){
        data=value;
        next=nullptr;
    }
};
int main(){
    node *n1=new node(10);
    node *n2=new node(20);
    node *n3=new node(30);
    node *n4=new node(40);
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    int value=50;
    node *newnode=new node(value);

   // Create header node
    node* header = new node(-1);

    // Make the list circular
    header->next = n1;
    n4->next = header;

    // Traverse the list
    node* temp = header->next;

    while(temp->next != header) temp=temp->next;

    newnode->next=header;
    temp->next=newnode;

    temp = header->next;

    while(temp!=header){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
