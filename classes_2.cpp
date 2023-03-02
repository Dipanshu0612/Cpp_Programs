#include <iostream>
#include <stdlib.h>
using namespace std;
class Person{
    private:
    int age;
    char tel[10];
    string name,gender;
    public:
    void settel(){
        cout<<"Enter telephone number: ";
        cin>>tel;
    }
    void setage(){
        cout<<"Enter Age: ";
        cin>>age;
    }
    void setgender(){
        cout<<"Enter Gender: ";
        cin>>gender;
    }
    void setname(){
        cout<<"Enter name: ";
        getline(cin,name);
    }
    void printinfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"Gender : "<<gender<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Telephone : "<<tel;
    }
};
int main(){
    system("cls");
    Person p1;
    p1.setname();
    p1.setgender();
    p1.setage();
    p1.settel();
    cout<<"The details of the person are:- "<<endl;
    p1.printinfo();
   return 0;
}