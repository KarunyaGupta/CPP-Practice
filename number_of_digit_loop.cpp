#include <iostream>
using namespace std;

int main(){
    int num;
    cin>> num;
    int count =0;
    if(num==0){
        cout<<1;
        
    }
    else{
        while(num>0){
        num=num/10;
        count+=1;
        }
        cout<<count;
    }

    return 0;
}