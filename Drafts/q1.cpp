#include <iostream>
#include <string>
using namespace std;
int main(){
    char istream_withassign[8];
    cin >> istream_withassign;
    cin.get(istream_withassign,8);
    cout << istream_withassign << endl;
    cin.get(istream_withassign,8);
    cout<<istream_withassign<<'\n';
    return 0;
}