class Solution {
  public:
   int costmin (int n, vector<int>&height,vector<int>&dp){
       // base case for 0 idx
       if(n == 0)
       {
           return 0;
       }
       if(n==1){
           return abs(height[n] - height[n-1]);
       }
       if(dp[n] != -1){
           return dp[n];
       }
       dp[n] =  min( costmin(n-1,height,dp)+abs(height[n] - height[n-1]),
                     costmin(n-2,height,dp)+abs(height[n]- height[n-2]));
       return dp[n];
      
   }
    int minCost(vector<int>& height){
        // Code here
        int n = height.size();
        vector<int>dp(n+1,-1);
        return costmin(n-1,height,dp);
        
    }
};
