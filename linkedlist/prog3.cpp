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

    int value;
    cin>>value;

    node* head=n1;
    node* temp=head;
    temp=head;
    int flag=0;
    while(temp!=nullptr){
        if(temp->data == value) {
            flag=1;
            break;
        }
        
        temp=temp->next;

    }
    if(flag==1) cout<<"yes";
    else cout<<"no";
}
