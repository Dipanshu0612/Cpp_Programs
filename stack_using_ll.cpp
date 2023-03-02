#include <iostream>
#include <stdlib.h>
using namespace std;

typedef struct Node{
    int data;
    struct Node * next;
}Node;

int empty(Node* top){
    if(top==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
int full(Node* top){
    Node* a=(Node*)malloc(sizeof(Node*));
    if(a==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
Node* push(int data,Node* top){
    Node* n=(Node*)malloc(sizeof(Node*));
    n->data=data;
    n->next=top;
    top=n;
    cout<<"Element Pushed!"<<endl<<endl;
    return top;
}
Node* pop(Node* top){
    Node* n=top;
    top=top->next;
    cout<<"Element "<<n->data<<" is deleted!"<<endl<<endl;
    free(n);
    return top;
}
void display(Node* top){
    if(empty(top)){
        cout<<"Stack is Empty!"<<endl<<endl;
    }
    else{
        while(top){
            cout<<top->data<<" --> ";
            top=top->next;
        }
        cout<<"NULL"<<endl<<endl;
    }
}


int main(){
    system("cls");
    Node* first=NULL;
    first=push(7,first);
    first=push(14,first);
    first=push(21,first);
    first=push(28,first);
    display(first);
    first=pop(first);
    display(first);
   return 0;
}