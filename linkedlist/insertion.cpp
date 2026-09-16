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

//     while(temp!=nullptr){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }


// }



// inserting at the begining

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
    

//     node* newnode=new node(5);

//     newnode->next=head;
//     head=newnode;

//     node *temp=head;

//     while(temp!=nullptr){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }


// }


//inserting at the end

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
    

//     node* newnode=new node(60);

    
//     node *temp=head;

//     while(temp->next!=nullptr){//loop breaks when temp points to last
        
//         temp=temp->next;
//     }

//     temp->next=newnode;//inserts newnode to last node

//     temp=head;//reinitializing temp with head to start the printing loop

//     while(temp!=nullptr){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }




// }



//inserting in between

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
    

//     node* newnode=new node(25);

    

//     node *temp=head;

//     while(temp!=nullptr){
//         if(temp->data==20) break;
//         temp=temp->next;
//     }
//     newnode->next=temp->next;
//     temp->next=newnode;


//     temp=head;
//     while(temp!=nullptr){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }


// }

//inserting in sorted linked list

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
    int value=43;

    node *head=n1;
    node *temp=head;

    node* newnode=new node(value);

    if(head->data>value){
        newnode->next=head;
        head=newnode;
        
    }
    else{

    

    while(temp->next!=nullptr && temp->next->data<value) temp=temp->next;

   
    newnode->next=temp->next;
    temp->next=newnode;
    }

    temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }


}


