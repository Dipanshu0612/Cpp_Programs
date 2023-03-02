#include <iostream>
#include <stdlib.h>
using namespace std;
void greatest(int *a, int *b ,int *c){
    if (*a>=*b){
        if (*a>=*c){
            cout<<*a<<" is the greatest number";
        }
        else{
            cout<<*c<<" is the greatest number";
        }
    }
    else if (*b>=*c){
        cout<<*b<<" Is the greatest number";
    }
    else{
        cout<<*c<<" is the greatest number";
    }
}

int main(){
    system("cls");
    int a,b,c;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"Enter the third number: ";
    cin>>c;
    greatest(&a,&b,&c);
   return 0;
}