#include <iostream>
using namespace std;

int main(){
    int decimal;
    cin>> decimal;
    int ans=0;
    int power=1;
    while(decimal>0){
        int paritydigit = decimal%2;
        ans += paritydigit*power;
        power *= 10;
        decimal  = decimal/2;
        


    }
    cout<<ans;
}