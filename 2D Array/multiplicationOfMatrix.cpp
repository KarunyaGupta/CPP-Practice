#include <iostream>
using namespace std;

int main(){
    int rows1, columns1, rows2, columns2;
    cin>>rows1>>columns1;
    cin>>rows2>>columns2;
    if(columns1!=rows2){
        cout<<"Invalid matrix";
        return 0;
    }
    int arr1[rows1][columns1]; // input 1st matrix
    for(int i=0;i<rows1;i++){
        for(int j=0;j<columns1;j++){
            cin>>arr1[i][j];
        }
    }

    int arr2[rows2][columns2];
    for(int i=0;i<rows2;i++){
        for(int j=0;j<columns2;j++){
            cin>>arr2[i][j];
        }
    }
    int ans[rows1][columns2];
    for(int i=0;i<rows1;i++){
        for(int j=0;j<columns2;j++){
            ans[i][j] = 0;
            for(int k=0;k<columns1;k++){
                ans[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    for(int i=0;i<rows1;i++){
        for(int j=0;j<columns2;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}