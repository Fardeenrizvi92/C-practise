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

node* reverse(node *head){
    node *prev=NULL;
    node *curr=head;
    node *temp;
    while(curr!=NULL){
        temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
        
    }
    return prev;
}

int palin(node *head){
    node *original=head;
    node *updated=reverse(head);

    node* temp1=original;
    node* temp2=updated;

    while(temp1!=NULL &&temp2!=NULL){
        if(temp1->data!=temp2->data) return 0;
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return 1;

}



int main(){
    node* n1=new node(10);
    node* n2=new node(20);
    node* n3=new node(30);
    node* n4=new node(40);
    node* n5=new node(50);

    n1-> next=n2;
    n2-> next=n3;
    n3-> next=n4;
    n4-> next=n5;
    
    node*head=n1;

    //reverse(head);
    
    

    node* temp;
    temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    if(palin(head)) cout<<"palin";
    else
    cout<<"not palin";


}


