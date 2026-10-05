#include<iostream>
using namespace std;

class Queue{
    public:
    Queue* head;
    Queue* tail;

    Queue(){
        head=nullptr;
        tail=nullptr;
    }

    bool empty(){
        return head==nullptr;
    }

    int front(){
        if(empty()){
            cout<<"Queue is empty";
            return -1;
        }
        return head->data;
    }

    int back(){
        if(empty()){
            cout<<"Queue is empty";
            return -1;
        }
        return tail->data;
    }

    void push(int val){
        Queue* newnode=new Queue(val);
        if(empty()){
            head=tail=newnode;
            return;
        }
        tail->next=newnode;
        tail=newnode;
    }
    void pop(){
        Queue* delnode=head;
        head=head->next;
        delete delnode;
    }

}
