// #include<iostream>
// using namespace std;
// class queue{
//     int arr[5];
//     int front,rear;

//     public:
//     queue(){
//         front=-1;
//         rear=-1;
//     }

//     void equeue(int value){
//         if(front == -1)
// {
//     front = 0;
// }
//         if(rear==4){
//             cout<<"overflow\n"<<" ";
//             return;

//         }
//         rear++;
//         arr[rear]=value;
//     }

//     void dequeue(){
//         if(front==-1||front>rear){
//             cout<<"underflow\n"<<" ";
//             return;

//         }
//         cout<<endl;
//         cout<<"deleted element "<<arr[front];
//         front++;

//     }
//     void display(){
//         if(front == -1 || front > rear)
//         {
//             cout << "Queue is empty\n";
//             return;
//         }
//         cout<<endl;
//         for(int i=front;i<=rear;i++){
//             cout<<arr[i]<<" ";
//         }
//     }
// };

// int main(){
//     queue q;
//     q.equeue(10);
//     q.equeue(20);
//     q.equeue(30);
//     q.equeue(40);
//     q.display();
//     q.dequeue();
//     q.dequeue();
//     q.display();


// }

//using linked list

#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;

};

class queue{
    public:
    node* front;
    node* rear;

    queue(){
        front =nullptr;
        rear=nullptr;

    }

    void equeue(int value){
        
        node* newnode=new node();
        newnode->data=value;
        if(front==nullptr) {
            front=newnode;
            rear=newnode;
        }
        rear->next=newnode;
        rear=newnode;

        
    }
    void dequeue(){
        node* temp=front;
        if(front==nullptr){
            cout<<"underflow"<<" ";
        }
        front=front->next;
        cout<<"deleted element "<<temp->data;

        if(front == nullptr)
        {
            rear = nullptr;
        }
        delete temp;
        
    }
    void display(){
        node* temp=front;
        if(front==nullptr){
            cout<<"underflow";
        }
        while(temp!=nullptr){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};
int main(){
    queue q;
    q.equeue(10);
    q.equeue(20);
    q.equeue(30);
    q.display();
    q.dequeue();
    q.display();





}