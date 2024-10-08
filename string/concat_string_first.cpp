// first and last characters are swapped.
#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a ;
    cin>>a;
    string b;
    cin>>b;
    int len1 ;
    len1 = a.size();
    int len2;
    len2 = b.size();
    
    cout<<len1<<" "<<len2<<endl; // print the length of string 
    
    cout<<a+b<<endl; // concatinate string 
    
    string temp;
    temp[0]=a[0];
    a[0]=b[0];
    b[0]=temp[0];
    
    cout<<a<<" "<<b<<endl;
    
    
    
    
  
    return 0;
}