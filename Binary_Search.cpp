#include <iostream>
#include <stdlib.h>
#include <algorithm>
using namespace std;
int main(){
    system("cls");
    int N,i,E,M=0;
    cout<<"Enter the size of array: ";
    cin>>N;
    int arr[N];
    for (i=0;i<N;i++){
        cout<<"Enter element: ";
        cin>>arr[i];
    }
    cout<<"The array is:-"<<endl;
    for (i=0;i<N;i++){
      cout<<arr[i]<<" ";
   }
    cout<<"\nEnter the element to be searched : ";
    cin>>E;

    sort(arr,arr+N);

    int L=0,H=N-1;
    while (L<=H){
        M=(L+H)/2;
        if(arr[M]==E){
            cout<<"Element found"<<endl;
            break;
        }
        else if (arr[M]<E)
        {
            L=M+1;

        }
        else if (arr[M]>E)
        {
            H=M-1;
        }

        cout<<"NOT FOUND!!"<<endl;
        break;
    }
   return 0;
}