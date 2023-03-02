#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
class Traingle{
    private:
    float h,b;
    public:
    void getvalues(){
        cout<<"Enter the Height of Traingle: ";
        cin>>h;
        cout<<"Enter the Base of Traingle: ";
        cin>>b;
    }
    float hypotenuse(){
        int c=((h*h)+(b*b));
        return sqrt(c);
    }
    float Area(){
        return 0.5*h*b;
    }
};

int main(){
    system("cls");
    Traingle T1;
    T1.getvalues();
    cout<<"The hypotenuse of the traingle is: "<<T1.hypotenuse()<<endl;
    cout<<"The area of the traingle is: "<<T1.Area();
   return 0;
}