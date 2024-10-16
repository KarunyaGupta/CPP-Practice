// #include <iostream>
// #include <stdexcept>

// using namespace std;

// double divide(double numerator, double denominator) {
//     if (denominator == 0) {
//         throw runtime_error("Cannot divide by zero!");
//     }
//     return numerator / denominator;
// }

// int main() {
//     double num, denom;
//     cout << "Enter numerator: ";
//     cin >> num;
//     cout << "Enter denominator: ";
//     cin >> denom;

//     set_terminate([]{ abort(); });
//     double result = divide(num, denom);
//     cout << "Result: " << result << endl;
//     return 0;
// }


// #include <iostream>
// #include <stdexcept>
// using namespace std;
// int getElement(int arr[],size_t size,size_t index){
//     if(index>=size){
//         throw out_of_range("Index out of range");
//     }
//     return arr[index];
// }
// void arrayRange(int index ){
//     int x[]={10,20,30,40,50};
//     cout<<x[index]<<endl;
//     cout<<"Excution Complete";
// }
// int main(){
//     int ind;
//     cin>>ind;
//     arrayRange(ind);

//     return 0;
// }


#include <iostream>
#include <stdexcept>
#include <new>
using namespace std;
int main(){
    size_t arraySize;
    cout<<"Enter the number of elements : ";
    cin>>arraySize;
    try{
        int *myArray = new int[arraySize];
        for(size_t i=0;i<arraySize;i++){
            myArray[i]=i+1  n;
        }
    }
}