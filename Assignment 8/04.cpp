class Solution {
public:
int solve(string &s , int m , int n,vector<vector<int>>&dp ){
    if(m>=n){
       return 0;
    }
    if(dp[m][n] != -1){
        return dp[m][n];
    }
    if(s[m] == s[n]){
        return dp[m][n] =  solve(s,m+1,n-1,dp);
    }
    else{
        return dp[m][n] = 1 + min(solve(s,m+1,n,dp),solve(s,m,n-1,dp));
    }
}
    int minInsertions(string s) {
        int n = s.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return solve(s,0,n-1,dp);
        
    }
};