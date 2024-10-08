#include <iostream>
using namespace std;

int main(){
    int upto_range;
    cin >> upto_range;

    for(int i = 0 ; i<=upto_range;i++){
        if(i%3==0){
            continue;
        }
        else{
            cout<<i<<", ";
        }

    }
    return 0;
}