//remove the duplicate node

#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int data1){
        data=data1;
        next=nullptr;
    }
};

void insertAtEnd(node* &head,int data){
    node* newnode=new node(data);

    if(head==NULL){
        head=newnode;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
}

void printnode(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    // node* n1=new node(10);
    // node* n2=new node(10);
    // node* n3=new node(20);
    // node* n4=new node(30);
    // node* n5=new node(40);
    // node* n6=new node(10);
    // node* n7=new node(50);
    // node* n8=new node(30);

    // n1-> next=n2;
    // n2-> next=n3;
    // n3-> next=n4;
    // n4-> next=n5;
    // n5->next=n6;
    // n6->next=n7;
    // n7->next=n8;

    
    node *head=NULL;
    // node *temp=head;

    // temp=head;
    // while(temp!=nullptr){
    //     cout<<temp->data<<" ";
    //     temp=temp->next;
    // }

    // cout<<endl;
    insertAtEnd(head,10);
    insertAtEnd(head,20);
    insertAtEnd(head,10);
    insertAtEnd(head,30);
    insertAtEnd(head,20);

    node* temp=head;

    while(temp!=nullptr){
        node* temp1=temp;
        while(temp1!=nullptr && temp1->next!=nullptr){
            if(temp1->next->data == temp->data){
                temp1->next=temp1->next->next;
            }
            else{
                temp1=temp1->next;
            }
        }
        temp=temp->next;
    }

    

    // temp=head;
    // while(temp!=nullptr){
    //     cout<<temp->data<<" ";
    //     temp=temp->next;
    // }
    printnode(head);


}

