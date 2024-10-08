#include <iostream>
#include <vector>
#define MIN_VALUE
using namespace std;
int main()
{
    int size;
    cin>>size;

    vector <int> arr(size);
    cout<<"Enter elements : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    for(int i =0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                arr[i]=arr[j]=-1;
            }
        }
    }

    
    for(int k=0;k<size;k++){
        if(arr[k]>0){
            cout<<arr[k]<<" ";
        }
    }
    
    return 0;
} 
