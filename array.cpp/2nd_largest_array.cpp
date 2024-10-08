#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main(){

    int size;
    cin>>size;
    vector<int> arr(size);
    cout<< "Enter elements of array : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int largest = INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    cout<<"The largest number is : "<<largest<<endl;



    int second_largest = INT_MIN;
    for(int i =0;i<size;i++){
        if(arr[i]>second_largest && arr[i]<largest){
            second_largest=arr[i];
        }
    }
    cout<<"Second largest number : "<<second_largest;
    return 0;

    
}