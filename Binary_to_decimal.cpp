    #include <iostream>
    using namespace std;

int main(){
    int binary_value ;
    cin>> binary_value;
    int last_number;
    int ans=0;
    int power=1;
    while(binary_value>0){
        last_number= binary_value%10;
        ans= ans+last_number*power;
        power*=2;
        binary_value = binary_value/10;
    }

    cout<< ans;
    
}