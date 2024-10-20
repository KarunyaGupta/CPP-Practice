// Design a class StringEncoder with a private data member str. Implement a method encodeString that encodes the string by replacing each character with its ASCII value.
// Sample Testcase 1: Input: StringEncoder("hello"), Output: "104101108108111" Sample Testcase 2: Input: StringEncoder("world"), Output: "119111114108100"
#include <iostream>
#include <string>
using namespace std;
class StringEncoder {
    private:
        string str;
    public:
        StringEncoder(string s){
            str=s;
        }
        string encodeString(){
            string encodedString="";
            for(int i=0;i<str.length();i++){
                encodedString+=to_string((int)str[i]);
            }
            return encodedString;
        }
};
int main(){
    string text;
    cout<<"Enter Text : ";
    getline(cin,text);
    StringEncoder s(text);
    cout<<s.encodeString();
}