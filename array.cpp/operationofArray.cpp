#include <iostream>
using namespace std;

int main(){
    int arr[10];
    cout<<"Size of array is : ";
    cout<<sizeof(arr);

    cout<<"\nlength of array : ";
    cout<<sizeof(arr)/sizeof(arr[0]);
    return 0;
}