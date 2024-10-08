#include <iostream>
#include <vector>
using namespace std;

int main(){
    int size;
    cin>>size;
    vector <int> arr(size);
    cout<<"Enter elements : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int to_find;
    cout << "Enter number to find : ";
    cin>>to_find;

    for(int i=0;i<size;i++){
        if(arr[i]==to_find){
            cout<<to_find<<" is present in array ";
            break;
        }
        else{
            cout<<to_find<<" is not present in array ";
            break;
        }
    }
}