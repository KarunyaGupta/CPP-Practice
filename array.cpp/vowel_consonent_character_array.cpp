#include <iostream>
using namespace std;

int main(){
    char vowel[5]={'a','e','i','o','u'};
    char input ;
    cout<<"Enter character  : ";
    cin>>input;

    if(input>='A'&&input<='Z'){
        input = input +32;
    }

    for(int i =0 ; i<5;i++){
        if(input == vowel[i]){
            cout<<"The character is a Vowel"<<endl;
            break;
        }
        else {
            cout<<"The character is a consonent"<<endl;
            break;
        }
    }
    return 0;
}