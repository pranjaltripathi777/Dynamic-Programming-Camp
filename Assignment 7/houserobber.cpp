class Solution {
public:
    int solve(vector<int>& nums, int idx,vector<int>&dp) {
        if (idx >= nums.size()){
            return 0;
        }
        if(dp[idx] != -1){
            return dp[idx];
        }
        //pick
        int pick = nums[idx] + solve(nums, idx + 2 ,dp);

        // Skip 
        int dontpick = solve(nums, idx + 1,dp);
        dp[idx] = max(pick, dontpick);
        return dp[idx];
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n,-1);
        return solve(nums, 0,dp);
    }
};