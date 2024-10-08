#include <iostream>
using namespace std;

class Employee{
    int id;
    static int count; // static variable declaration

public:
    void setDeta(void) {
        cout << "Enter id: ";
        cin >> id;
        count++;
    }

    void getDeta(void) {
        cout << "id is " << id << endl;
        // cout << "Count: " << count << endl;
    }

    static void getCount(void) {
        cout << "Count: " << count << endl;
        // cout<<id<<endl;   throws error 
    }
};

int Employee::count = 1000; // static variable initialization

int main() {
    Employee karunya;
    karunya.setDeta(); // set the id and increment count
    karunya.getDeta(); // display the id and count
    Employee::getCount(); // display the count

    return 0;
}