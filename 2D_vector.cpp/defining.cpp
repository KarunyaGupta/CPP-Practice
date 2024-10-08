#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <vector <int>> arr;  // decleration of vector
    // input 2D vector;

    // int m,n;

    // vector <vector<int>>v(n,vector<int>(m));   // specify length

    int rows,columns;
    cin>>rows>>columns;

    for(int i=0;i<rows;i++){
        vector<int> row;
        for(int j=0;j<columns;j++){
            int element;
            cin>>element;
            row.push_back(element);
        }
        
        arr.push_back(row);
    }

    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}