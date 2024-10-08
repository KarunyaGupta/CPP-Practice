#include <iostream>
using namespace std;

int main(){
    // declaration or variable
    int firstNumber;
    int secondNumber;
// input first and second number;
    cout<<"Enter first number : ";
    cin>> firstNumber;

    cout<<"Enter second number : ";
    cin>> secondNumber;

// swaaping of variable 
    int temp;
    temp = firstNumber;
    firstNumber = secondNumber;
    secondNumber = temp;


// printing the swapping value ;
    cout<< "swapped values\n" <<"first number : " <<firstNumber <<"\n"<< "second number : "<<secondNumber;


    return 0;
    
    
}