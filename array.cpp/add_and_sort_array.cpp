#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    // input for vector 1;
    vector <int> arr1;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        arr1.push_back(element);
    }



    // input for vector 2;
    vector <int> arr2;
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int element;
        cin>>element;
        arr2.push_back(element);
    }

    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());

    int size = m+n;
    vector <int> result;
    for(int i=0;i<size-m;i++){
        result.push_back(arr1[i]);
    }
    for(int i=0;i<size-n;i++){
        result.push_back(arr2[i]);
    }
    sort(result.begin(),result.end());
    for(int i=0;i<size;i++){
        cout<<result[i]<<" ";
    }


}