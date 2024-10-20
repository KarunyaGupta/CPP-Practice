#include <iostream>
using namespace std;

int main(){
    int num1 = 5; //0110
    int num2=4;// 1010
// bitwise AND and OR
    cout<<(num1&num2)<<endl;
    cout<<(num1|num2)<<endl;
// ternary operator
   int flag;
   num1==num2?flag=true:flag=false;
   cout<< flag;
// size of variable
   cout << sizeof(num1);

// memory location 
   cout<<(&num1);
}