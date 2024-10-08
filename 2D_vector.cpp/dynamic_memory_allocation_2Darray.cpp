//write a program to create a function with argument of 2d array and print the element of array using the function using dynamic memory allocation

#include <iostream>
using namespace std;
void printArray(int **arr,int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n,m;
    cout<<"Enter number of rows and columns : ";
    cin>>n>>m;
    int **arr = new int*[n];
    for(int i=0;i<n;i++){
        arr[i] = new int[m];
    }
    cout<<"Enter elements of array : ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    printArray(arr,n,m);
    return 0;
}