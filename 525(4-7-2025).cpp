// Leetcode 525

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> sumIndex;
        sumIndex[0] = -1;

        int sum = 0, maxLen = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum += (nums[i] == 0) ? -1 : 1;

            if (sumIndex.count(sum)) {
                maxLen = max(maxLen, i - sumIndex[sum]);
            } else {
                sumIndex[sum] = i;
            }
        }

        return maxLen;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {0, 1, 0, 0, 1, 1};
    cout << "Longest Contiguous Balanced Subarray: " << sol.findMaxLength(nums) << endl;
    return 0;
}
