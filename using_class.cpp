#include <iostream>
#include <stdlib.h>
using namespace std;
class  Average{
        private:
        float A,B,C;

        public:
        void initialize(){
                cout<<"Enter the first number: ";
                cin>>A;
                cout<<"Enter the second number: ";
                cin>>B;
                cout<<"Enter the third number: ";
                cin>>C;

        }

        friend float fun1(Average N);
        friend float fun2(Average N);

};
float fun1(Average N){
        cout<<"The average of the two numbers is : ";
        return (N.A+N.B)/2;
}

float fun2(Average N){
        cout<<"The average of the three numbers is : ";
        return (N.A + N.B + N.C)/3;

}


int main(){
    system("cls");
    Average a;
    a.initialize();
    cout<<fun1(a)<<endl;
    cout<<fun2(a);
   return 0;
}