// create a base class with array two function
//code
#include <iostream>
using namespace std;
class Base{
    public:
    int **arr;
    int n,m;
    void createArray(){
        cout<<"Enter number of rows and columns : ";
        cin>>n>>m;
        arr = new int*[n];
        for(int i=0;i<n;i++){
            arr[i] = new int[m];
        }
        cout<<"Enter elements of array : ";
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
    }
    void printArray(){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};

//derive clqss by using base class with one common function name but different meaasage
//code
class Derived:public Base{
    public:
    void createArray(){
        cout<<"Enter number of rows and columns : ";
        cin>>n>>m;
        arr = new int*[n];
        for(int i=0;i<n;i++){
            arr[i] = new int[m];
        }
        cout<<"Enter elements of array : ";
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
    }
};
// call all function from derived class qbject 
//code
int main(){
    Derived d;
    d.createArray();
    d.printArray();
    return 0;
}