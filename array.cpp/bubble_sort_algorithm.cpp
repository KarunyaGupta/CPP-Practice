// bubble sort algorithm

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n; // Read the size of the vector from the input

    vector <int> v;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    
    // Bubble sort
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(v[j] > v[j + 1]){
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
      
    return 0;
}