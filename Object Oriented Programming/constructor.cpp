#include <iostream>
using namespace std;


class Rectangle{
    public:
    int length;
    int breadth;

    Rectangle(){   // default constructor  // no argument pass
        length = 0;
        breadth = 0;
    }


    Rectangle(int x,int y){  // parameterised constructor 
        length = x;
        breadth = y;
    }


    Rectangle(Rectangle& r){// copy constructor --> initilize by object by other existing object
        length = r.length;
        breadth = r.breadth;
    }

    ~Rectangle(){  // destructure
        cout<<"Destructor called"<<endl;
    }
};

int main(){
    Rectangle *r1 = new Rectangle;  
    cout << r1->length << " " << r1->breadth << endl;
    delete r1;


    Rectangle r2(3,6);
    cout << r2.length << " " << r2.breadth << endl;


    Rectangle r3=r2;
    cout << r3.length << " " << r3.breadth << endl;

 
    return 0;
}