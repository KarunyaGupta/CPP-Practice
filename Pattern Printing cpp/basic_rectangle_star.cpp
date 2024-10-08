#include <iostream>
using namespace std;
int main(){
    int rows;
    cout<< "Enter rows : ";
    cin>>rows;

    int column;
    cout<< "Enter columns : ";
    cin>> column;

    for(int i = 1;i<=rows;i++){
        for(int j = 1;j<=column;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }

    if(rows==column){
        cout<<"Pattern is in Square";
    }
    else{
        cout<< "Pattern is in Rectangle";
    }

    return 0;
}