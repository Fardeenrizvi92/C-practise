#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int data1){
        data=data1;
        next=nullptr;
        prev=nullptr;
    
    }
};

int main(){
    node* n1 = new node(10);
    node* n2 = new node(20);
    node* n3 = new node(30);

}