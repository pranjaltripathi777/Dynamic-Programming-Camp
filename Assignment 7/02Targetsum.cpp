class Solution {
public:
    int countWays(vector<int>& nums, int index, int currentSum, int target) {
        if (index == nums.size()) {
            if (currentSum == target)
                return 1;
            else
                return 0;
        }

        int add = countWays(nums, index + 1, currentSum + nums[index], target);
        int subtract = countWays(nums, index + 1, currentSum - nums[index], target);

        return add + subtract;
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        return countWays(nums, 0, 0, target);
    }
};