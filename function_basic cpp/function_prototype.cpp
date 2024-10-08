#include <iostream>

using namespace std;

int add(int , int);   // this is a function prototype;
int main(){
    int num1;
    int num2;

    cin>>num1;
    cin>>num2;

    int sum = add(num1,num2);
    cout<<sum;
}


int add(int num1, int num2) {
    return num1 + num2;
}