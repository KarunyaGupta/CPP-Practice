#include <iostream>
using namespace std;

class Fruit{
public:
    string name;
    string color;
};

class student{
    string name ;
    int rollnumber;

};

int main(){
    Fruit apple; //object 
    apple.name = "Apple";
    apple.color = "Red";

    cout<<apple.name<<endl;
    cout<<apple.color<<endl;


// pointer approach
    Fruit *mango = new Fruit();
    mango ->name = "Mango";
    mango->color = "Yellow";
    cout<<mango->name<<endl;
    cout<<mango->color<<endl;
    

    return 0;
}


// by default classes are privet 
// we can make them public or protected
