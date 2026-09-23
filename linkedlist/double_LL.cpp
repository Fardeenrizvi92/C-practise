#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int data1){
        data=data1;
        next=nullptr;
        prev=nullptr;
    
    }
};

int main(){
    node* n1 = new node(10);
    node* n2 = new node(20);
    node* n3 = new node(30);
    node* n4 = new node(40);
  

    n1->next=n2;
    n2->prev=n1;

    n2->next=n3;
    n3->prev=n2;

    n3->next=n4;
    n4->prev=n3;

    n4->next=nullptr;

    node* temp;
    node* head=n1;
    temp=head;

    cout<<"forward"<<endl;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

    temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }

    cout<<"Backward"<<endl;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->prev;
    }

}