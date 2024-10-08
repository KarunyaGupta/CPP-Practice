#include <iostream>
using namespace std;

int main() {
    int arr[5][5];
    int count =0; // number of elements  --> n*m
    // datatype arrNameg[row][column]

    // Read the matrix from the user
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout<<"["<<i<<"]["<<j<<"] : ";
            cin>>arr[i][j];
        }
    }

    // Print the matrix
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
            count ++;
        }
        cout << endl;
    }
    cout<<count;

    

    return 0;
}