// given a boolean 2d array ,where each row is sorted .. find the row with maximum number of 1s
// testcase:
// input row = 3;col=4
// matrix[]= {{0,1,1,1},{0,0,0,1},{0,0,0,1}}
// output :0

//input row = 2;col =2
// matrix[]={{0,1},{1,1}}
// output : 1

#include <iostream>
#include <vector>
#include <limits>
#define INT_MIN
using namespace std;


int maximumOneRow(vector<vector<int>>&V){
    int maxOnes = 0;
    int maxOnesRow = -1;
    for(int i=0;i<V.size();i++){
        for(int j=0;j<V[i].size();j++){
            if(V[i][j]==1){
                int numberOfOnes = V[0].size() - j;
                if(numberOfOnes >maxOnes){
                    maxOnes = numberOfOnes;
                    maxOnesRow = i;
                }
            }
        }
    }
    return maxOnesRow;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> vec(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>vec[i][j];
        }
    }
    cout<<"output is : ";
    int res = maximumOneRow(vec);
    cout<<res<<endl;
}
