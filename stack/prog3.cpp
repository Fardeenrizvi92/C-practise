// #include<iostream>
// using namespace std;
// int stack[5];
// int top=-1;

// void pop(){
//     if(top==-1){
//         cout<<"underflow";
//         return;
//     }
//     int value=stack[top];
//     top--;
//     cout<<"deleted element "<<value<<endl;
// }
// void push(int value){
    
//     if(top==4){
//         cout<<"overflow";
//         return;
//     }
    
//     top++;
//     stack[top]=value;
// }
// int main(){
//     push(10);
//     push(20);
//     push(30);
//     pop();
//     pop();
//     pop();
//     pop();
//     for(int i=0;i<=top;i++){
//         cout<<stack[i]<<" ";
//     }
// }

//using classes

#include<iostream>
using namespace std;


// class Stack{
//     public:
//     int stack[5];
//     int top;

//     Stack(){
//         top=-1;  
//     }
//     void pop(){
//     if(top==-1){
//         cout<<"underflow";
//         return;
//     }
//     int value=stack[top];
//     top--;
//     cout<<"deleted element "<<value<<endl;
//     }
//     void push(int value){
    
//     if(top==4){
//         cout<<"overflow";
//         return;
//     }
    
//     top++;
//     stack[top]=value;
//     }
//     void display(){
//         if(top==-1){
//             cout<<"emply";

//         }
//         for(int i=0;i<=top;i++){
//         cout<<stack[i]<<" ";
//     }
//     }
// };   
// int main(){
//     Stack s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.display();
//     s.pop();
//     s.display();
    
// }


//stack using linked list
#include<iostream>
using namespace std;

struct node{
    int data;
   node* next;
};
class Stack{
   public:
   node* top;

   Stack(){
    top=nullptr;
   }

   void push(int value){
    node* newnode=new node();
    newnode->data = value;
    newnode->next=top;
    top=newnode;
   }

   void pop(){
    if(top==nullptr){
        cout<<"underflow";
        return;
    }
    cout<<"deleted element"<<top->data;
    node* temp=top;
    top=top->next;
    delete temp;
   }

   void display(){

    if(top==nullptr){
        cout<<"underflow";
        return;
    }
    node* temp=top;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
   }


};

int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.pop();
    s.pop();
    s.display();
}