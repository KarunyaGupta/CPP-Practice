#include <iostream>
#include <vector>
using namespace std;

int main(){
     vector <int> v;
    int n;
    cin>>n;
    for(int i = 0 ; i<n;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    bool sorted = false;
    for(int i =0 ; i<v.size();i++){
        if(v[i]>v[i-1]){
            sorted = true;
        }

    }

    if(sorted){
        cout<<"Sorted"<<endl;
    }
    else{
        cout<<"Not Sorted"<<endl;
    }
    return 0;

} 