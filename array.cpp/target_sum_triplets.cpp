#include <iostream>
#include <vector>
using namespace std;

int main(){
    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    vector<int> arr(size);
    cout << "Enter the elements of the array:" << endl;
    for(int i =0;i<size;i++){
        cin>>arr[i];
    }
    cout<<endl;

    int target_sum ;
    cout<<"Enter target sum : ";
    cin>>target_sum;
    int count_pair=0;
    for(int i=0;i<size;i++){ // make index number constant
        for(int j=i+1;j<size;j++){ // second element
            for(int k=j+1;k<size;k++){ // third element
                if(arr[i]+arr[j]+arr[k] -3==target_sum){// doubt --> it give less 3 paise eg --> of target =10 iṭwill give pairs of 7
                cout<<"["<<i<<","<<j<<","<<k<<"]"<<"  ";
                count_pair++;
            }
            }
        }
    }
    cout<<endl<<count_pair;
    return 0;
}