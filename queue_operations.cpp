#include <iostream>
#include <stdlib.h>
using namespace std;
// int top=-1;
int f=-1,r=-1;

void insert(int n,int arr[]){
    if (r>=n-1){
        cout<<"Overflow!! Queue if full."<<endl<<endl;
    }
    else{
        int a;
        cout<<"Enter the element: ";
        cin>>a;
        r+=1;
        arr[r]=a;
        cout<<"Element Inserted!"<<endl<<endl;;

        if(f<0){
            f=0;
    }
    }

}
void remove(int n,int arr[]){
    if(f<0){
        cout<<"Underflow!! Queue is empty!"<<endl<<endl;
    }
    else{
        f+=1;
        cout<<"Element deleted!"<<endl<<endl;;
    }

    // if(f==r){
    //     f=-1;
    //     r=-1;
    // }
}
void display(int n,int arr[]){
    if (f<0 || r<0){
        cout<<"Queue is empty!!"<<endl<<endl;
    }
    else{
        cout<<"\nThe elements in queue are: "<<endl;
        for(int i=f;i<=r;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl<<endl;
    }
}

int main(){
    system("cls");
    int n,ch;
    bool a=true;
    cout<<"Enter the size of queue: ";
    cin>>n;
    int arr[n];
    while(a==true){
        cout<<"The following options are available: ";
        cout<<"\n1.Insert\n2.Delete\n3.Display\n4.EXIT"<<endl;
        cout<<"Enter your Choice: ";
        cin>>ch;
        if (ch==1){
            insert(n,arr);
        }
        else if (ch==2){
            remove(n,arr);
        }
        else if (ch==3){
            display(n,arr);
        }
        else if (ch==4){
            a=false;
            cout<<"Exiting Program!";
        }
    }
   return 0;
}   