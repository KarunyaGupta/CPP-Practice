#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int ansarr[size];

    int k ;
    cout<<"Rotate by step : ";
    cin>>k;

    k=k%size; // if in a big integer

    int j=0;
    for(int i =size-k;i<size;i++){
        ansarr[j++]=arr[i];
    }


    for(int i=0;i<=k;i++){
        ansarr[j++]=arr[i];
    }

    for(int i=0;i<size;i++){
        cout<<ansarr[i]<<" ";
    }
    cout <<endl;



}