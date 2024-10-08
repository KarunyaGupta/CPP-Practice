#include <iostream>
using namespace std;
class MathOperations {
public:
    // 1. No-argument, No-return function (void function)
    void displayMessage() {
        cout << "Welcome to Math Operations!" << endl;
    }

    // 2. Argument, No-return function (void function with arguments)
    void addNumbers(int a, int b) {
        cout << "The sum of " << a << " and " << b << " is " << a + b << endl;
    }

    // 3. No-argument, Return function (function with return value)
    int getPi() {
        return 3.14;
    }

    // 4. Argument, Return function (function with arguments and return value)
    int multiplyNumbers(int a, int b) {
        return a * b;
    }
};