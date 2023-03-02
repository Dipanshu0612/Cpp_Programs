#include <iostream>
#include <stdlib.h>
#include<stack>
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
}Tree;

void preorder(Tree* ptr){
    stack<Tree*> ans;
    ans.push(ptr);
    while(!ans.empty()){
        Tree* curr=ans.top();
        ans.pop();
        if(curr->right!=NULL){
            ans.push(curr->right);
        }
        if(curr->left!=NULL){
            ans.push(curr->left);
        }
        cout<<curr->data<<" ";
    }
    
}
void inorder(Tree* ptr){
    stack<Tree*> ans;
    Tree* curr=ptr;
    while(true){
    if(curr!=NULL){
        ans.push(curr);
        curr=curr->left;
    }

    else{

    curr=ans.top();
    ans.pop();
    cout<<curr->data<<' ';
    curr=curr->right;

    }
    }
}
void postorder(Tree* ptr){
    stack<Tree*> ans;
    ans.push(ptr);
    while(!ans.empty()){
    Tree* curr=ans.top();
    ans.pop();
    if(curr->left!=NULL){
        ans.push(curr->left);
    }
    if(curr->right!=NULL){
            ans.push(curr->right);
        }
    cout<<curr->data<<" ";

    }
}
int main(){
    system("cls");
    Tree* root= new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);     
    root->left->right=new Node(5);     
    root->right->left=new Node(6);     
    root->right->right=new Node(7);
    cout<<"PREORDER TRAVERSAL IS: ";
    preorder(root);
    // inorder(root);
    // postorder(root);
   return 0;
}