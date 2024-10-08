#include <iostream>
using namespace std;

int main(){
    int a =3;
    int *b = &a;  // potiner declaation 
    cout<<b<<endl;


    int arr[]={1,2,3,4,5,6};
    for(int i=0;i<6;i++){
        int* address = &arr[i]; 
        cout<<address<<endl;
    }
    cout<<endl;

    
    int* pointre_add=b;
    cout<<pointre_add<<endl;



    // dereference operator 
    cout<<"the value at address b is "<<*b<<endl;


    // pointer to pointer
    int ** c =&b;


    
    return 0;
}

