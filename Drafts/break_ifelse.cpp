#include <iostream>
using namespace std;

int main(){
    int natural_number;
    cin>>natural_number;

    for(int i = 0 ; i<natural_number;i++){
        if(i==5){
            break;
        }
        else{
            cout<<i <<" ";
        }
    }
    return 0;
}