#include <iostream>
#include <stdlib.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};

struct Node *insertATbegi(struct Node *ptr, int data)
{
    struct Node *pt = (struct Node *)malloc(sizeof(struct Node));
    pt->data = data;

    pt->next = ptr;
    ptr = pt;
    return ptr;
}
struct Node *insertAFTERnode(struct Node *ptr, struct Node *prevpoi, int data)
{
    struct Node *pt = (struct Node *)malloc(sizeof(struct Node));
    pt->data = data;

    pt->next = prevpoi->next;
    prevpoi->next = pt;
    return ptr;
}

struct Node *insertATindex(struct Node *ptr, int data, int index)
{
    struct Node *pt = (struct Node *)malloc(sizeof(struct Node));
    pt->data = data;
    struct Node *p = ptr;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    pt->next = p->next;
    p->next = pt;
    return ptr;
}
struct Node *insertATend(struct Node *ptr, int data)
{
    struct Node *pt = (struct Node *)malloc(sizeof(struct Node));
    pt->data = data;

    struct Node *poi = ptr;
    while (poi->next != NULL)
    {
        poi = poi->next;
    }
    poi->next = pt;
    pt->next = NULL;
    return ptr;
}

void displayList(struct Node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << "-->";
        ptr = ptr->next;
    }
}

int main()
{
    system("cls");
    struct Node *first, *second, *third;
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    first->data = 10;
    first->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    cout << "List at first\n";
    displayList(first);
    // first=insertATbegi(first,1);
    // first=insertATindex(first,1,2);
    // first=insertATend(first,1);
    first = insertAFTERnode(first, third, 1);
    cout << "List updated\n";
    displayList(first);

    return 0;
    cout<<"HI"<<endl;
}

