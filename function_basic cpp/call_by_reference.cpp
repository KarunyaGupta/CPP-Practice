#include <iostream>
using namespace std;

void functionName(int &p , int &q){
    p = 100;
    q = 99;
}

int main(){
    int a=10;
    int b=20;
    cout << "Before function call: " << a<<" "<<b << endl; // & operator or ampersand operator is used to access 
    functionName(a,b);
    cout << "After function call: " << a<<" "<<b << endl;
    return 0;
}


// int main(){
//     int p;
//     p=10;
//     int &q=p;
//     cout<<q<<endl;
//     cout<<&q<<endl;
//     cout<<&q<<endl;
//     return 0 ;
// }