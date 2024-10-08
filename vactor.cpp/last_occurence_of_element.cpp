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

    // 1,2,3,4,1,2,3,4 --> lastoccurance of 1 --> index number
    int last_occure;
    cout<<"Enter number to find : ";
    cin>>last_occure;

    int occurance = -1;
    for(int i =0 ; i<v.size();i++){
        if(last_occure==v[i]){
            // continue;
            occurance= i;
        }
    }
    cout<<occurance<<endl;

    // n-1 give the index fo last element 
    // make the loop reverse;
    for(int i = v.size();i>=0;i--){
        if(last_occure==v[i]){
            // continue;
            occurance= i;
            break;
        }
    }
    cout<<occurance;
    
    return 0;

}