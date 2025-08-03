class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        
    int maxSum = 0, minSum = 0, curr = 0;
    for (int i : nums) {
        curr += i;
        maxSum = max(maxSum, curr);
        minSum = min(minSum, curr);
    }
    return maxSum - minSum;


        
    }
};
