#include <iostream>
using namespace std;


class Complex{
    int a;
    int b;
    public:
    void setData(int v1,int v2){
        a=v1;
        b=v2;
    }
    void sumOfComplex(Complex o1,Complex o2){
        a= o1.a + o2.a;
        b= o1.b + o2.b;
    }
    void print(){
        cout<<"Sum of complex numbers is "<<a<<" + "<<b<<"i"<<endl;
    }
};
int main(){
    Complex c1,c2,c3;
    c1.setData(3,4);
    c2.setData(2,5);
    c3.sumOfComplex(c1,c2);
    c3.print();

    return 0;
}