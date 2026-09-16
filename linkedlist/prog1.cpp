// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* next;

//     node(int value){
//         data=value;
//         next=nullptr;
//     }
// };
// int main(){
//     node *n1=new node(10);
//     node *n2=new node(20);
//     node *n3=new node(30);
//     node *n4=new node(40);
//     n1->next=n2;
//     n2->next=n3;
//     n3->next=n4;



//     node* head=n1;

//     //inserting in the starting
//     node* newNode = new node(5);
//     // newNode->next=head;
//     // head=newNode;


//     node* temp=head;
//     // while(temp!=nullptr){
//     //     cout<<temp->data<<" ";
//     //     temp=temp->next;

//     // }

//     //inserting at the end
//     while(temp!=nullptr && temp->next!=nullptr){
//         //cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     temp->next=newNode;
//     temp=head;
//     while(temp!=nullptr){
//         cout<<temp->data<<" ";
//         temp=temp->next;

//     }
// }

#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int value){
        data = value;
        next = nullptr;
    }
};
int main(){
    node * n1 = new node(10);
    node * n2 = new node(20);
    node * n3 = new node(30);
    n1->next = n2;
    n2->next = n3;
    
}
