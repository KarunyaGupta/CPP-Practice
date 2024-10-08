// 1-2+3-4+5-6+7-8 .........nth

#include <iostream>
using namespace std;

int main(){

    int n ;
    cout<<"Enter number : ";
    cin>> n ;
    int total_sum ;
    
    // for(int i = 1;i<=n;i++){
    //     if(i%2==0){
    //         total_sum = total_sum-i;
    //     }
    //     else{
    //         total_sum = total_sum+i;  
    //     }
    // }

    int oddsum=0;
    int evensum=0;

    for(int i = 1;i<=n;i++){
        if(i%2==0){
            evensum = evensum+i;
        }
        else{
            oddsum = oddsum+i;
        }
    }

    total_sum = oddsum-evensum;
    cout<<"The sum of series is : "<<total_sum;




    return 0;
}

