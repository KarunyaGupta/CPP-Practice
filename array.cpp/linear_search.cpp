#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter length of array : ";
    cin>>n;

    int arr[n];

    //taking input of array : 
    cout << "Enter elements of array : ";
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    // input a number that we have to find 
    int to_find;
    cout<<"Enter a number to find in array : ";
    cin>>to_find;


    int result = -1;
    for(int i = 0;i<n;i++){
        if(to_find == arr[i]){
            result =i;
            
        }
    }

    cout<< result <<" "<<endl;
    return 0;
}


