class Solution {
public:
    int solve(vector<vector<int>>&grid,int i , int j , int m , int n,vector<vector<int>>&dp){
        //base case 
        if(i== m-1 && j == n-1){
            return grid[i][j];
        }
        if(i>=m  || j >=n){
            return INT_MAX;
        }
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        // recurrence relation 
        int a  = solve(grid , i+1,j,m,n,dp);
        int b = solve(grid,i,j+1,m,n,dp);
        dp[i][j]= min(a,b)+grid[i][j];
        return dp[i][j];
    }
    
    int minPathSum(vector<vector<int>>& grid) {
        int m  = grid.size();
        int n = grid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return solve(grid,0,0,m,n,dp);
    }
};