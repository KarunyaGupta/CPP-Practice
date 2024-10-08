#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;




int main(){
    vector <int> arr;
    int size;
    cin>> size;

    for(int i=0;i<size;i++){
        int element ;
        cin>>element;
        element = abs(element); // make -ve element into +ve
        arr.push_back(element);
    }


    // for(int i=0;i<size;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    sort(arr.begin(),arr.end()); // sort array 

// to find the power of elements
    for(int i=0;i<arr.size();i++){
        arr[i]=pow(arr[i],2);
        cout<<arr[i]<<" ";
    }

    

    return 0;
}