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

    int number;
    cout<<"Enter number to check occure :  ";
    cin>>number;
    int count =0;
    for(int i =0 ; i<v.size();i++){
        if(number==v[i]){
            // continue;
            count+=1;
        }
    }
    cout<<"Total occurance of "<<number<<" is "<<count;

    return 0;
}