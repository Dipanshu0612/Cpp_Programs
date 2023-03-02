#include <iostream>
#include <stdlib.h>
#include<vector>
#include<queue>
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

void bfs(Tree* root){
    if (root==NULL){
        // return ans;
    }
    queue<Tree*> q;
    q.push(root);
    while(!q.empty()){
        int s=q.size();
        vector<int> level;
        for(int i=0;i<s;i++){
            Tree *n=q.front();
            q.pop();
            if (n->left!=NULL){
                q.push(n->left);
            }
            if (n->right!=NULL){
                q.push(n->right);
            }
            level.push_back(n->data);
            cout<<n->data<<" ";
        }
        
    }
}


int main(){
    Tree* root= new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);     
    root->left->right=new Node(5);     
    root->right->left=new Node(6);     
    root->right->right=new Node(7); 


    cout<<"THE BFS IS : ";
    bfs(root);
    
   return 0;
}