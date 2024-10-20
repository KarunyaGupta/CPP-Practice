#include <iostream>
using namespace std;

int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return n * factorial(n-1);
    }
}


int main(){


    

    int number ;
    cin>>number;
    int n,r;
    number == r == n;
    if(n<r){
        cout<<"Invalid";
    }

    int permutation = factorial(n)/factorial(r)*factorial(n-r);
    for(int i=0;i<number;i++){
        for(int j=0;j<number;j++){
            cout<<permutation;
        }
        cout<<endl;
    }
    return 0;
}

