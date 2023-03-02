#include <iostream>
#include <stdlib.h>
using namespace std;
struct Node{
    int data;
    struct Node* next;
};


struct Node* deleteAtFirst(struct Node* ptr){
    ptr=ptr->next;
    return ptr;
}

void deleteatindex(struct Node* ptr,int index){
    struct Node* pt=(struct Node*)malloc(sizeof(struct Node));
    pt=ptr;
    struct Node* p;
    int i=0;
    while(i!=index-1){
        pt=pt->next;
        i++;
    }
    p=pt->next->next;
    free(pt->next);
    pt->next=p;

}

void displayList(struct Node *ptr){
    while(ptr!=NULL){
    cout<<ptr->data<<"-->";
    ptr=ptr->next;
}
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

    cout<<"Before Updating!"<<endl;
    displayList(first);
    cout<<"After Updating!"<<endl;
    // first=deleteAtFirst(first);
    deleteatindex(first,2);
    displayList(first);

   return 0;
}