#include <iostream>
using namespace std;

class xyz{
    int x;
    public:
    void set(int n){
        x=n;
    }
    int get(){
        return x;
    }

};

int main(){
    xyz obj1;
    obj1.set(3);
    cout<<obj1.get()<<endl;


}