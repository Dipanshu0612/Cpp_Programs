#include <iostream>
#include <stdlib.h>
using namespace std;
class A{
    private:
    int a,b;
    public:
    void setXY(int p,int q){
        a=p;
        b=q;
    }
    void getXY(){
        cout<<"a is : "<<a<<endl;
        cout<<"b is : "<<b;
    }
};
class B:public A{
    public:
        void GET2(){
        // setXY(int p, int q);
        getXY();
    }
};
int main(){
    system("cls");
    B a;
    a.setXY(8,8);
    a.GET2();
   return 0;
}