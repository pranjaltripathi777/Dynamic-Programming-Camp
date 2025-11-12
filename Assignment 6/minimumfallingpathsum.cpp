#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int solve(vector<vector<int>>&grid , int n , int i ,int j,vector<vector<int>>&dp ){
        //base case ;
        if(i == n-1){
            return grid[i][j];
        }
        if(dp[i][j] != INT_MAX){
            return dp[i][j];
        }
        int minimum = INT_MAX;
        for(int k = 0 ; k < n;k++){
            if(k==j){
                continue;
            }
            int val = grid[i][j]+ solve(grid,n,i+1,k,dp);
            minimum = min(val,minimum);
        }
        dp[i][j] =  minimum;
        return dp[i][j];
    }
    int minFallingPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>>dp(n,vector<int>(n,INT_MAX));
        int mini = INT_MAX;
        for(int j = 0 ; j < n ; j++){
            mini = min(mini,solve(grid,n,0,j,dp));
        }
        return mini;
    }
};

int main() {
    vector<vector<int>> grid = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    Solution s;
    cout << s.minFallingPathSum(grid) << endl;

    return 0;
}
