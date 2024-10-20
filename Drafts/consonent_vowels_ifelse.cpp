#include <iostream>
using namespace std;

int main(){
    char alphabet;
    cin>> alphabet;

    if(alphabet=='a'||alphabet=='e'||alphabet=='i'||alphabet=='o'||alphabet=='u'){
        cout<< "Vowel";
    }
    else if(alphabet=='A'||alphabet=='E'||alphabet=='I'||alphabet=='O'||alphabet=='U'){
        cout<< "Vowel";
    }
    else{
        cout<< "Consonent";
    }
    return 0;

}