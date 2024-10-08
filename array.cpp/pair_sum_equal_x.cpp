#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    // input for vector
    vector <int> arr;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int element;
        cin >> element;
        arr.push_back(element);
    }
    int x;
    cin >> x;

    // Sort the vector to apply the two-pointer technique
    sort(arr.begin(), arr.end());

    int left = 0;
    int right = arr.size() - 1;

    while(left < right){
        int sum = arr[left] + arr[right];
        if(sum == x){
            cout << arr[left] << " " << arr[right] << endl;
            left++;
            right--;
        } else if(sum < x){
            left++;
        } else {
            right--;
        }
    }

    return 0;
}