// //deletion in starting
// #include<iostream>
// using namespace std;

// class node{
//     public:
//     int data;
//     node* next;

//     node(int data1){
//         data=data1;
//         next=nullptr;
//     }
// };

// int main(){
//     node* n1=new node(10);
//     node* n2=new node(20);
//     node* n3=new node(30);
//     node* n4=new node(40);
//     node* n5=new node(50);

//     n1-> next=n2;
//     n2-> next=n3;
//     n3-> next=n4;
//     n4-> next=n5;
    

//     node *head=n1;
    

//     head=head->next;

//     node *temp=head;

//     while(temp!=nullptr){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }


// }


//deletion at the end

// #include<iostream>
// using namespace std;

// class node{
//     public:
//     int data;
//     node* next;

//     node(int data1){
//         data=data1;
//         next=nullptr;
//     }
// };

// int main(){
//     node* n1=new node(10);
//     node* n2=new node(20);
//     node* n3=new node(30);
//     node* n4=new node(40);
//     node* n5=new node(50);

//     n1-> next=n2;
//     n2-> next=n3;
//     n3-> next=n4;
//     n4-> next=n5;
    

//     node *head=n1;
    

    

//     node *temp=head;

//     while(temp->next->next != nullptr)//stops at second last element
//     {   
//         temp = temp->next;
//     }

//     temp->next=NULL;

//     temp=head;

//     while(temp!=nullptr){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
// }

//deletion in between

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
    

    node *head=n1;
    

    

    node *temp=head;

    while(temp->next!=nullptr){
        if(temp->next->data==20) break;
        temp=temp->next;
    }

    temp->next=temp->next->next;

    temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }


}

