#include <iostream>
#include <stdlib.h>
using namespace std;
int top=-1;

void push(int n,int arr[]){
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    if (top>=n-1){
        cout<<"Ovreflow!!! Stack is Full."<<endl<<endl;
    }
    else{
        top+=1;
        arr[top]=a;
        cout<<"Element inserted!"<<endl<<endl;
    }
}

void pop(int n,int arr[]){
    if (top==-1){
        cout<<"Underflow!! Stack is empty!"<<endl<<endl;
    }
    else{
        top-=1;
        cout<<"Last inserted element is deleted!"<<endl<<endl;
    }
}

void display(int n,int arr[]){
    if(top==-1){
        cout<<"Stack is empty!!"<<endl<<endl;
    }
    else{
        cout<<"The elements in stack are: "<<endl;
        for(int i=top;i>=0;i--){
            cout<<arr[i]<<" ";
        }
        cout<<endl<<endl;
    }
}

void peek(int arr[]){
    if(top==-1){
        cout<<"Stack is empty!!"<<endl<<endl;
    }
    else{
    cout<<arr[top]<<endl<<endl;
    }
}


int main(){
    system("cls");
    int n,ch;
    bool a=true;
    int arr[n];
    cout<<"Enter the size of stack: ";
    cin>>n;
    while(a==true){
        cout<<"The following options are available: ";
        cout<<"\n1.Push\n2.Pop\n3.PEEK\n4.Display\n5.EXIT"<<endl<<endl;
        cout<<"Enter your Choice: ";
        cin>>ch;
        if (ch==1){
            push(n,arr);
        }
        else if (ch==2){
            pop(n,arr);
        }
        else if (ch==3){
            peek(arr);
        }
        else if (ch==4){
            display(n,arr);
        }
        else if (ch==5){
            a=false;
            cout<<"Exiting Program!";
        }
    }

   return 0;
}

