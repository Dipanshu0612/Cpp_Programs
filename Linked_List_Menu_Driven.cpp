#include <iostream>
#include <stdlib.h>
using namespace std;

typedef struct Node
{
    int data;
    struct Node *next;
}Node;

Node* insertAtFront(Node* ptr,int data){
    Node* New=(Node*)malloc(sizeof(Node));
    New->data=data;
    New->next=ptr;
    ptr=New;
    return ptr;
}

Node* insertAtEnd(Node* ptr,int data){
    Node* New=(Node*)malloc(sizeof(Node));
    New->data=data;
    New->next=NULL;
    Node* p=ptr;
    while((p->next)!=NULL){
        p=p->next;
    }
    p->next=New;
    return ptr;
}

void displayList(Node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << " --> ";
        ptr = ptr->next;
    }
    cout<<" NULL";
}
int main(){
    system("cls");
    struct Node *first,*second,*third,*fourth;
    first=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));

    first->data=10;
    first->next=second;

    second->data=20;
    second->next=third;

    third->data=30;
    third->next=fourth;

    fourth->data=40;
    fourth->next=NULL;
    bool a=true;
    while(a){
        int c;
        cout<<"1.Insert at Front"<<endl;
        cout<<"2.Insert at End"<<endl;
        cout<<"3.Display Linked List"<<endl;
        cout<<"4.EXIT"<<endl<<endl;
        cout<<"Enter your Choice: ";
        cin>>c;
        cout<<endl;
        if(c==1){
        int d;
        cout<<"Enter Value: ";
        cin>>d;
        first=insertAtFront(first,d);
        cout<<"Element inserted at Front!"<<endl<<endl;
        }
        else if (c==2){
        int e;
        cout<<"Enter Value: ";
        cin>>e;
        first=insertAtEnd(first,e);
        cout<<endl;
        cout<<"Element inserted at End!"<<endl<<endl;
        }
        else if (c==3){
        displayList(first);
        cout<<endl<<endl;
        }

        else if (c==4){
        cout<<"EXITING PROGRAM!";
        a=false;
        }
    }
   return 0;
}