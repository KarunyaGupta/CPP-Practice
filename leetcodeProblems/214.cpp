// You are given a string s. You can convert s to a 
// palindrome
//  by adding characters in front of it.

// Return the shortest palindrome you can find by performing this transformation.

 

// Example 1:

// Input: s = "aacecaaa"
// Output: "aaacecaaa"
// Example 2:

// Input: s = "abcd"
// Output: "dcbabcd"
 

// Constraints:

// 0 <= s.length <= 5 * 104
// s consists of lowercase English letters only.
class Solution {
public:
    string shortestPalindrome(string s) {
        string rev = s;
        reverse(rev.begin(),rev.end());
        string temp = s + "#" + rev;
        int n = temp.size();
        vector<int> lps(n,0);
        for(int i=1;i<n;i++){
            int j = lps[i-1];
            while(j>0 && temp[i] != temp[j]){
                j = lps[j-1];
            }
            if(temp[i] == temp[j]){
                j++;
            }
            lps[i] = j;
        }
        return rev.substr(0,s.size()-lps[n-1]) + s;
    }
};