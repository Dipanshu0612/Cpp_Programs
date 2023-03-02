#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    system("cls");
    int i,j,k,N;
    cout<<"Enter the size of array:";
    cin>>N;
    int arr[N];
    for(i=0;i<N;i++){
        cout<<"Enter the element:";
        cin>>arr[i];
    }
    for(i=1;i<N;i++){
        k=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>k){
            arr[j+1]=arr[j];
            j-=1;
        }
        arr[j+1]=k;
    }

    cout<<"Array after sorting is:"<<endl;
    for(i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }
   return 0;
}