#include <iostream>
using namespace std;

int sum_of_array(int arr[], int n, int i) {
    int sum = 0;
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[50];
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    // Ensure the array size does not exceed the array's declared size
    if (n > 50) {
        cout << "Size exceeds the maximum allowed (50)." << endl;
        return 1;
    }

    cout << "Enter elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int total_sum = sum_of_array(arr, n, 0);
    cout << "Sum of the elements: " << total_sum << endl;

    return 0;
}
