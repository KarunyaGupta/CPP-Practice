#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int largest(int size, const vector<int>& arr) {
    int max = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int second_largest(int size, const vector<int>& arr,int max) {
    int sec_max = INT_MIN;
    int max;
    for (int i = 0; i < size; i++) {
        if (arr[i] > sec_max && arr[i] < max) {
            sec_max = arr[i];
        }
    }
    return sec_max;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    if (size < 2) {
        cout << "Array should have at least two elements." << endl;
        return 1;
    }

    vector<int> arr(size);
    cout << "Enter elements of array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int max = largest(size, arr);
    int sec_max = second_largest(size, arr,max);

    cout << "The largest number is: " << max << endl;
    if (sec_max == INT_MIN) {
        cout << "There is no second largest element." << endl;
    } else {
        cout << "The second largest number is: " << sec_max << endl;
    }

    return 0;
}
