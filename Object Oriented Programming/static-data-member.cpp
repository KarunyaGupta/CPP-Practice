#include <iostream>
using namespace std;

class Employee
{
    int id;
    // int count;
    static int count; // by default value is 0 // not declare hear
public:
    void setDeta(void)
    {
        cout << "Enter id";
        cin >> id;
        count++;
    }

    void getDeta(void)
    {
        cout << "id is " << id << endl;
        cout << count;
    }
};
int Employee ::count;
// int Employee ::count = 1000; // declare id hear
int main()
{
    Employee karunya;
    // id and count are private
    karunya.setDeta();
    karunya.getDeta();
}

// static varible =  class variable
// if we use int count --> than according to it it print 1 on each itration insted of 1,2,4,5
// scope --> local
// one static --> share to all object