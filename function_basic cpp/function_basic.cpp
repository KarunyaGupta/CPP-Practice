#include <iostream>

using namespace std;

// Function to take input and update the values of num1 and num2
void input(int &num1, int &num2) {
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
}

// Function to add two numbers and return the sum
int add(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int num1, num2;

    // Call the input function to get values for num1 and num2
    input(num1, num2);

    int sum = add(num1, num2);

    cout << "The sum of the two numbers is: " << sum << endl;

    return 0;
}
