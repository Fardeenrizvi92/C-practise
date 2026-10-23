#include<bits/stdc++.h>
using namespace std;


class node{
    public:
    int data;
    node *left;
    node *right;
    node(int data){
        this->data=data;
        left=nullptr;
        right=nullptr;
    }
};

void inorder(node *root){
    if(root==nullptr) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}

int main(){
    node *root=new node(10);
    node *n1=new node(3);
    node *n2=new node(1);
    root->left=n1;
    root->left=n2;

    node *n3=new node(2);
    node *n4=new node(6);
    n1->left =n3;
    n1->right=n4;

    node *n5=new node(4);
    node *n6=new node(7);
    n2->left=n5;
    n2->right=n6;

    inorder(root);
    
    


}