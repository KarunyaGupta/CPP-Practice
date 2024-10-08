#include <iostream>
using namespace std;
int main(){
    int rows , columns;
    cin>>rows>>columns;
    int arr[rows][columns];
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Given Matrix : "<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"transpose matrix : "<<endl;
    for(int i=0;i<columns;i++){
        for(int j=0;j<rows;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;

    }
    return 0;
}