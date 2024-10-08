#include <iostream>
using namespace std;

int main(){

    int number ;
    cout<<"Enter number : ";
    cin>> number ;
    int sum ;
    sum = 0;
    
    while(number>0){
        int remainder;
        remainder = number%10;
        number = number/10;
        sum = sum +remainder ;

    }
    cout<< sum;

    return 0;
}