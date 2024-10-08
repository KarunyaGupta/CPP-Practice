#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int main(){
    char s[]="abcde";
    char goal[]="cdeab";
    int size=sizeof(s)-1;

    cout<<s[0]<<endl;
    cout<<size<<endl;
    bool result = false;
    for(int i=0;i<size;i++){
        for(int j=1;j<size;j++){
            if(s[i]!=goal[i]){
                result = true;
            }
        }
    }
    cout<<result;

    return 0;
}