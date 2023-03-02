#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	system("cls");
	int N,i,E;
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
   for (i = 0; i < N; i++)
   {
      if (arr[i]==E){
         cout<<"Element found at index : "<<i<<endl;
      }
      else{}
   }
   
   return 0;
}