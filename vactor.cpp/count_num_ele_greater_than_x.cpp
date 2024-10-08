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

    int x;
    cout<<"x :  ";
    cin>>x;
    int count =0;
    for(int i =0 ; i<v.size();i++){
        if(v[i]>x){
            count+=1;
        }
    }
    cout<< "Number greater than "<<x<<" are "<<count<<endl;


    //to print that numbers :
    cout<<"The numbers are : " ;
    for(int i =0 ; i<v.size();i++){
        if(v[i]>x){
            // continue;
            cout<<v[i]<<" ";
        }
    }

    return 0;
}