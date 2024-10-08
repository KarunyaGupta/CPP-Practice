#include <iostream>
#include <vector>
using namespace std;

int main(){
    // declaration of vactor
    vector<int> v;
    // initially the size is zero 
    cout<<"size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;


    v.push_back(10); // using push_back operation elements is added in it 
    cout<<"size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;


    v.push_back(11);
    cout<<"size : "<<v.size()<<endl; // show the size of vector 
    cout<<"Capacity : "<<v.capacity()<<endl; //display the total capacity fo vactor capacity = 2^(size)


    v.push_back(12);
    cout<<"size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;

    v.push_back(13); 
    cout<<"size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;

    v.push_back(14);
    cout<<"size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;


    cout<<"Elements in vactor are : ";
    for(int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    // cout<<"size : "<<v.size()<<endl;
    // cout<<"Capacity : "<<v.capacity()<<endl;


    v.pop_back(); // last element i sremoved form the vector
    cout<<"Remaining elements after pop_back() : ";
    for(int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;



    // inserting element in a specific potion;
    v.insert(v.begin()+2,10);
    // 2nd method
    //v.insert(v.end()-2,10);
    cout<<"Remaining elements after v.insert() : ";
    for(int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;


    //remove the element form specific postion 
    v.erase(v.begin()+1);
    cout<<"Remaining elements after v.erase() : ";
    for(int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;


    // to delete all the elements : 
    v.clear();
    cout<<"Remaining elements after v.clear() : ";
    for(int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;



    return 0;
}
