#include <iostream>
using namespace std;

int main(){

    int number ;
    cout<<"Enter number : ";
    cin>> number ;

    int lastdigit;

    cout<< "The reverse of the number is : ";
    // while(number>0){
        
    //     lastdigit = number%10;
    //     number = number/10;
    //     cout<< lastdigit;
    // }

    int reverse=0;
    while(number>0){
        lastdigit = number%10;
        
        reverse=reverse*10+lastdigit;
        number = number/10;
    }
    cout<< reverse;
    

    return 0;
}