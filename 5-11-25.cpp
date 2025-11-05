class Solution {
public:
    int maxCoins(vector<int>& nums) {
         int n = nums.size();
        if (n == 0) return 0;

        // Pad with 1s to handle borders cleanly
        vector<int> val(n + 2, 1);
        for (int i = 0; i < n; ++i) val[i + 1] = nums[i];

        // dp[i][j] = max coins bursting all balloons in [i..j] (1-indexed in val)
        vector<vector<int>> dp(n + 2, vector<int>(n + 2, 0));

        // len = current interval length
        for (int len = 1; len <= n; ++len) {
            for (int i = 1; i + len - 1 <= n; ++i) {
                int j = i + len - 1;
                int best = 0;
                // pick k as the last balloon to burst in [i..j]
                for (int k = i; k <= j; ++k) {
                    int coins = val[i - 1] * val[k] * val[j + 1]
                              + dp[i][k - 1]              // left interval
                              + dp[k + 1][j];             // right interval
                    if (coins > best) best = coins;
                }
                dp[i][j] = best;
            }
        }
        return dp[1][n];
        
    }
};
