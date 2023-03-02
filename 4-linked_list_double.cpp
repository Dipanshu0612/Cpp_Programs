#include <iostream>
#include <stdlib.h>
using namespace std;

typedef struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
} Node;

Node *insertatbeg(Node *f, int data)
{
    Node *ptr = (Node *)malloc(sizeof(Node));
    ptr->data = data;
    ptr->prev = NULL;
    ptr->next = f;
    f = ptr;
    return f;
}
Node *insertatEND(Node *f, int data)
{
    Node *ptr = (Node *)malloc(sizeof(Node));
    ptr->data = data;
    ptr->next = NULL;
    Node *p = f;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->prev = p;

    return f;
}

void Display(Node *f)
{
    Node *ptr = f;
    while (ptr->next != NULL)
    {
        cout << ptr->data << "<-->";
        ptr = ptr->next;
    }
    cout << ptr->data << "<-->None";
    cout << endl
         << endl;
}

int main()
{
    system("cls");
    Node *first, *second, *third, *fourth;
    first = (Node *)malloc(sizeof(Node));
    second = (Node *)malloc(sizeof(Node));
    third = (Node *)malloc(sizeof(Node));
    fourth = (Node *)malloc(sizeof(Node));

    first->data = 10;
    first->prev = NULL;
    first->next = second;

    second->data = 20;
    second->prev = first;
    second->next = third;

    third->data = 30;
    third->prev = second;
    third->next = fourth;

    fourth->data = 40;
    fourth->prev = third;
    fourth->next = NULL;

    Display(first);
    first = insertatEND(first, 50);
    Display(first);

    return 0;
}