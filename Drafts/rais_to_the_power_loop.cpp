#include <iostream>
using namespace std;

int main(){
    int a ;
    int b;
    cin>>a;
    cin>>b;
    int number = 1;
    for(int i = 1;i<=b;i++){
        number = number*a;
    }
    cout<<a<<"^"<<b<<"="<<number;
    return 0;
}