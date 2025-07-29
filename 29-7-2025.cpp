class Solution {
public:
    unordered_map<string, int> memo;

    int dp(vector<int>& nums, int i, int sum, int target) {
        if (i == nums.size()) return sum == target ? 1 : 0;

        string key = to_string(i) + "," + to_string(sum);

        if (memo.find(key) != memo.end()) return memo[key];

        int add = dp(nums, i + 1, sum + nums[i], target);
        int subtract = dp(nums, i + 1, sum - nums[i], target);

        return memo[key] = add + subtract;
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        return dp(nums, 0, 0, target);
    }
};
