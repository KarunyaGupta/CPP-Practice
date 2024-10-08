#include <iostream>
using namespace std;

class Employee
{
    private:   //specifier 
        int a,b,c;
    public:
        int d,e;
        void setDate(int a1,int b1,int c1); // declaration
        void display(){
            cout<<"a="<<a<<endl;
            cout<<"b="<<b<<endl;
            cout<<"c="<<c<<endl;
            cout<<"d="<<d<<endl;
            cout<<"e="<<e<<endl;
        }
// private member is accessible only be function in class
//  public member is accessible by function in class and outside class
};
void Employee :: setDate(int a1 , int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}

int main(){

    Employee karunya;
   // karunya.a = 34;// private not accessible throughh error ;
    karunya.setDate(1,2,3);
    karunya.display();
    return 0;
    
}