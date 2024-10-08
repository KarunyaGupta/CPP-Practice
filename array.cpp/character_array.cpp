#include <iostream>
#include <string.h>
using namespace std;
int main(){
    char str[50];
    for(int i=0;i<strlen(str);i++){
        cin>>str[i];
    }

    cout<<"\nThe given array is : "<<endl;

    for(int i=0;i<strlen(str);i++){
        cout<<str[i];
    }
}