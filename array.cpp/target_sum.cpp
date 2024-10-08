#include <iostream>
#include <vector>
using namespace std;

int main(){
    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    vector<int> arr(size);
    for(int i =0;i<size;i++){
        cin>>arr[i];
    }
    cout<<endl;

    int target_sum ;
    cout<<"Enter target sum : ";
    cin>>target_sum;
    int count_pair=0;
    for(int i=0;i<size;i++){ // make index number constant
        for(int j=i+1;j<size;j++){ // now iterate the rest of elements
            if(arr[i]+arr[j]-2==target_sum){// doubt --> it give less 2 paise eg --> of target =10 iṭwill give pairs of 8
                cout<<"["<<i<<","<<j<<"]"<<endl;
                count_pair++;
            }
        }
    }
    cout<<count_pair<<endl;
    return 0;
}