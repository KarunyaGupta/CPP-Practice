#include <iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,0};

    cout<<arr<<" "<<endl;
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int index=0;index<size;index++){
        cout<<arr[index]<<" ";
    }
}