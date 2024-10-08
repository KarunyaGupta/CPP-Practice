#include <iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter number of rows : ";
    cin>> rows;

    int column;
    cout<< "Enter number of columns : ";
    cin>> column;

    for(int i = 1;i<=rows;i++){
        for(int j = 1;j<=column;j++){
            if(j==1 || j==column || i==1||i==rows){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<"\n";
    }
}