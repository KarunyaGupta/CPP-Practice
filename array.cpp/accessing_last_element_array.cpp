#include <iostream>
using namespace std;

int main(){
    int arr[100];
    int n;
    cin>>n;

    for(int i = 0;i<n;i++){
        cin>> arr[i];
    }
    cout<<"Last element of array is : "<<arr[n-1];

    // for(int i =0;i<n;i++){
    //     if(i==n-1){
    //         cout<<arr[i];
    //     }
        
    // }

    return 0;


}