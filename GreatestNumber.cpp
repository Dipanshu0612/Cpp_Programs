#include <iostream>
#include <stdlib.h>
using namespace std;
	

int main(){
	system("cls");
	int a,b,c;
	cout<<"Enter the first numnber: ";
	cin>>a;
	cout<<"Enter the second numnber: ";
	cin>>b;
	cout<<"Enter the third numnber: ";
    cin>>c;
    
    if (a>=b){
    	if (a>=c){
    		cout<<(a)<<" is the greatest";
		}
    	
}

   else if (b>=c){
   
    	if (b>=a){
    	cout<<(b)<<" is the greatest";
    }
         
        else{
        	cout <<(c)<<" is the greatest";
		} 
}
return 0;
}

