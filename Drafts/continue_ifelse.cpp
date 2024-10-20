#include <iostream>
using namespace std;

int main(){
    int natural_number;
    cin>>natural_number;

    for(int i = 0 ; i<natural_number;i++){
        if(i%2==0){
            continue; //leave it and itrate to next;
        }
        else{
            cout<<i <<" ";
        }
    }
    return 0;
}