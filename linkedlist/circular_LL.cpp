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
//     n5-> next=n1;

//     node* head=n1;
//     node* temp=head;

//     do{
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }while(temp!=head);

// }


//starting at the beginning
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
//     node* newnode=new node(5);

//     n1-> next=n2;
//     n2-> next=n3;
//     n3-> next=n4;
//     n4-> next=n5;
//     n5-> next=n1;

//     node* head=n1;
//     newnode->next=head;
//     node* temp=head;

//     while(temp->next!=head) temp=temp->next;
//     temp->next=newnode;
//     head=newnode;
//     temp=head;

//     do{
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }while(temp!=head);

// }

//insertion at the end
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
//     node* newnode=new node(5);

//     n1-> next=n2;
//     n2-> next=n3;
//     n3-> next=n4;
//     n4-> next=n5;
//     n5-> next=n1;

//     node* head=n1;
//     //newnode->next=head;
//     node* temp=head;

//     while(temp->next!=head) temp=temp->next;
//     temp->next=newnode;
//     newnode->next=head;
//     temp=head;

//     do{
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }while(temp!=head);

// }


//deletion from the starting
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
//     node* newnode=new node(5);

//     n1-> next=n2;
//     n2-> next=n3;
//     n3-> next=n4;
//     n4-> next=n5;
//     n5-> next=n1;

//     node* head=n1;
//    // head=head->next;
//     node* temp=head;
//      node* todelete=head;

//     while(temp->next!=head) temp=temp->next;

//     temp->next=head->next;
//     head=head->next;
//     delete head;
    
//     temp=head;

//     do{
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }while(temp!=head);

// }

//delete from end

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
    n5-> next=n1;

    node* head=n1;
   // head=head->next;
    node* temp=head;

    while(temp->next->next!=head) temp=temp->next;

    node* todelete=temp->next;

   

    temp->next=head;
     delete todelete;
    
    
    temp=head;

    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);

}