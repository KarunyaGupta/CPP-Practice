#include <iostream>
#include <vector>
using namespace std;

int main(){
    // vector <int> vec;

    // for(int i =0;i<5;i++){
    //     int element;
    //     cin>>element;
    //     vec.push_back(element);
    // }




    // take a input form user --> much similar to array 
    int n;
    cin>>n;
    vector <int> v;
    for(int i = 0; i<n;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }

    // to print the input form the user 
    for(int i=0;i<v.size();i++){
        cout<< v[i]<<" ";
    }
    cout<<endl;

 



    return 0;

}