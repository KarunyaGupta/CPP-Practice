#include <iostream>
using namespace std;
int main(){
    int first;
    cin>> first ;

    int second;
    cin>> second;
    cout<< "Addition : " << first + second ;
    
    cout<< "\n";
    cout<< "Subtraction : " << first-second;
    cout<< "\n";
    cout<< "multification : " << first*second<<"\n";

    cout<< "Modulus : "<<first%second <<"\n";
    cout<< "increment : "<<first++<<"\n";
    cout<< "decrement : "<<first--<<"\n";
    
    cout<< "Division : " ;
    if(second==0){
        cout<< "not divisible by zero ";
    }else{
        cout<< float(first)/second;
    }

    return 0 ;

}