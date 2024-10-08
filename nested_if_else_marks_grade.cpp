#include <iostream>
using namespace std;
int main(){

    int marks;
    cin>> marks;

    if(marks>33){
        if(marks>80){
            cout<< "Outstanding";
        }
        else if(marks>60){
            cout<< "Good keep it up";
        }
        else{
            cout<< "passes";
        }
    }
    else{
        cout<< "FAIL";
    }
    return 0;
}