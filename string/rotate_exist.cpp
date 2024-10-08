#include <iostream>
using namespace std;
class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()){
            return false;
        }
        int size=s.size();
        for (int i = 0; i < size; ++i) {
            bool match = true;
        // Check if this shift results in the goal string
            for (int j = 0; j < size; ++j) {
                if (s[(i + j) % size] != goal[j]) {
                    match = false;
                    break;
                }
            }
            if (match){
                return true;
            }    
        }
        return false;
    } 
};

int main(){
    Solution solution;
    string s,goal;
    cin>>s;
    cout<<endl;
    cin>>goal;
    bool ans;
    ans = solution.rotateString(s,goal);
    cout<<ans<<endl;
    return 0;
}