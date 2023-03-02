#include <iostream>
#include <stdlib.h>
using namespace std;

typedef struct Node{
    int data;
    struct Node* next;
}Node;

void Display(Node* f){
    Node* ptr=f;
    do{
        cout<<(ptr->data)<<"-->";
        ptr=ptr->next;
    }while(ptr!=f);
}

int main(){
    system("cls");
    Node *first,*second,*third,*fourth;
    first=(Node*)malloc(sizeof(Node));
    second= (Node*)malloc(sizeof(Node));
    third=(Node*)malloc(sizeof(Node));
    fourth=(Node*)malloc(sizeof(Node));

    first->data=10;
    first->next=second;

    second->data=20;
    second->next=third;

    third->data=30;
    third->next=fourth;

    fourth->data=40;
    fourth->next=first;

    Display(first);

    return 0;
}