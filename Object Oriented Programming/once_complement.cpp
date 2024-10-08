#include <iostream>
#include <string>
using namespace std;
// class Employee{
//         public:
//         // defination
//     } karunya , harsh;

// karunya.salary = 8 make no sene if salary is private

// nesting of member functions

class binary
{  // by default everything is private 
private:
    string s;

public:
    void read(void);
    void check(void);
    void ones_complement(void);
    void display(void);

};
void binary :: read(void){
    cout<<"Enter a binary number : ";
    cin>>s;
}

void binary :: check(void){
    for(int i=0;i<s.length();i++){
        if(s[i]!='0' && s[i]!='1'){
            cout<<"incorrect binary format"<<endl;
            exit(0);
        }

    }
    cout<<endl;
}

void binary :: ones_complement(void){
    for(int i=0;i<s.length();i++){
        if(s[i]=='1'){
            s[i] ='0';
        }
        else if(s[i]=='0'){
            s[i] ='1';
        }
        else{
            s[i] = s[i];
        }
    }
}
void binary :: display(void){
    cout<<"displaying your binary number : ";
    for(int i=0;i<s.length();i++){
        cout<<s[i];
    }
    cout<<endl;
}


int main(){

    binary b;
    b.read();
    b.check();
    b.display();
    b.ones_complement();
    b.display();
    return 0;

}
