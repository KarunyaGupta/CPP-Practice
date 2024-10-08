#include <iostream>
using namespace std;

class Employee{
    int id;
    int salary;
    public:
    void getID(void){
        salary = 122;
        cout<<"Enter id of employee : "<<endl;
        cin>>id;
    }
    void setID(void){
        cout<<"The id of employee is : "<<id<<endl;
    }
};

int main(){
    // Employee e1,e2,e3;
    // e1.setID();
    // e1.getId();

    Employee Fb[4];
    for(int i=0;i<4;i++){
        Fb[i].getID();
        Fb[i].setID();
        
    }
    
    return 0;
}