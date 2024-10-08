#include <iostream>
using namespace std;

int main(){
    int rows, columns;
    cin>>rows>>columns;
    if(rows!=columns){
        cout<<"Invalid matrix";
        return 0;
    }
    int arr1[rows][columns];
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cin>>arr1[i][j];
        }
    }

    int arr2[rows][columns];
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cin>>arr2[i][j];
        }
    }
    int ans[rows][columns];
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            ans[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}