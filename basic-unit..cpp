#include <iostream>
using namespace std;
int main(){
    int a , b;
    cout<<"Enter a  :";
    cin>>a;
    cout<<"Enter b  :";
    cin>>b;
    int sum =0;

    for(int i=a;i<b;i++){
        int cube = i*i*i;
        sum = sum + cube;
        a++;
    }
    cout<<sum;
    return 0;
}