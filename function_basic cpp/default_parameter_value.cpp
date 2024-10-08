#include <iostream>
using namespace std;

// int def_parameter(int a , int b=0,int c=0){
//     return a+b+c;
// }

int def_parameter(int a , int b=1,int c=2){
    return a+b+c;
}


int main(){
    int a,b,c;
    cout<<def_parameter(20)<<endl;
    cout<<def_parameter(20,30)<<endl;
    cout<<def_parameter(20,30,40)<<endl;


    return 0;

}

