class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        int sum = accumulate(nums.begin(), nums.end(), 0);
        vector<vector<int>> dp(n, vector<int>(2 * sum + 1, 0));
        
        if (target > sum || target < -sum) {
            return 0;
        }
        dp[n - 1][nums[n - 1] + sum] = 1;      
        dp[n - 1][-nums[n - 1] + sum] += 1;
        for (int i = n - 2; i >= 0; i--) {
            for (int j = 0; j <= 2 * sum; j++) {
                if (j + nums[i] <= 2 * sum) {
                    dp[i][j] += dp[i + 1][j + nums[i]];
                }
                if (j - nums[i] >= 0) {
                    dp[i][j] += dp[i + 1][j - nums[i]];
                }
            }
        }
        
        return dp[0][target + sum];
    }
};