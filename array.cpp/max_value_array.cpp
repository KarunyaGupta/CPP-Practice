#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    // input 
    for(int i = 0 ;i<n;i++){
        cin>>arr[i];
    }

    int max = arr[0];

    for(int i =0;i<n;i++){
        if(arr[i]>arr[0]){
            max=arr[i];
        }
    }
    cout<<"Max value is : "<<max;
    return 0;
}


