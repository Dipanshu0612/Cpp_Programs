#include <iostream>
#include <stdlib.h>
using namespace std;
typedef struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
}NEW;

void preorder(NEW* ptr){
    if(ptr==NULL){
        return;
    }
    cout<<ptr->data<<" ";
    preorder(ptr->left);
    preorder(ptr->right);
}
void inorder(NEW* ptr){
    if(ptr==NULL){
        return;
    }
    inorder(ptr->left);
    cout<<ptr->data<<" ";
    inorder(ptr->right);
}
void postorder(NEW* ptr){
    if(ptr==NULL){
        return;
    }
    postorder(ptr->left);
    postorder(ptr->right);
    cout<<ptr->data<<" ";
}


int main(){
    system("cls");
    NEW* root= new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);     
    root->left->right=new Node(5);     
    root->right->left=new Node(6);     
    root->right->right=new Node(7);     

    cout<<"The preorder traversal is: ";
    preorder(root);
    cout<<endl;
    cout<<"The inorder traversal is: ";
    inorder(root);
    cout<<endl;
    cout<<"The postorder traversal is: ";
    postorder(root);
    cout<<endl;

   return 0;
}