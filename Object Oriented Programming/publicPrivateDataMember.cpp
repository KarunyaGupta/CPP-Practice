#include <iostream>
using namespace std;
class Name{
    private:
    string name;
    public:
    void inputName(){
        cout << "Enter your name: ";
        getline(cin,name);
    }
    void outputName(){
        cout<<"Your name is : "<<name<<endl;
    } 
};

int main(){
    Name apkanaam;
    apkanaam.inputName();
    apkanaam.outputName();
    return 0;

}