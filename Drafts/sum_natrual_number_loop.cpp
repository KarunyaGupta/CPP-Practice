#include <iostream>
using namespace std;

int main(){
    // using for loop :
    // int num;
    // cin>> num;
    // int sum = 0;
    // for(int i = 1; i<=num;i++){
    //     sum = sum +i;

    // }
    // cout<< sum;


    // using while loop :
    // int num;
    // cin>> num;
    // int sum = 0;
    // int i = 1;
    // while(i<=num){
    //     sum = sum+i;
    //     // i+=1;
    //     i++;
    // }
    // cout<< "The sum of n natural numbers are : "<< sum;



    // using do while loop ;

    int n;
    cin>> n;
    int sum = 0; 
    do{
        int num;
        cin>> num;
        sum= sum+n;
        n--;

    }while(n>0);

    cout<< sum;


    
}


