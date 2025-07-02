/*
Problem: Longest Substring with At Most K Distinct Characters
---------------------------------------------------------------------
Given a string `s` and an integer `k`, return the length of the 
longest substring that contains at most `k` distinct characters.

Example:
Input: s = "eceba", k = 2
Output: 3
Explanation: The substring is "ece" with only 2 distinct characters.

Approach:
- Sliding Window with Two Pointers (left and right)
- Use an unordered_map to count characters in the current window
- If map size > k, shrink window from left
- Track the maximum length at each step

Time Complexity: O(n)
Space Complexity: O(k)
*/

#include <iostream>
#include <unordered_map>
using namespace std;

int lengthOfLongestSubstringKDistinct(string s, int k) {
    // Edge case: empty string or k == 0
    if (k == 0 || s.empty()) return 0;

    unordered_map<char, int> mp;  // Frequency map
    int maxLen = 0, left = 0;

    // Expand window with right pointer
    for (int right = 0; right < s.length(); ++right) {
        mp[s[right]]++;

        // Shrink window if more than k distinct characters
        while (mp.size() > k) {
            mp[s[left]]--;
            if (mp[s[left]] == 0)
                mp.erase(s[left]);
            left++;
        }

        // Update max length
        maxLen = max(maxLen, right - left + 1);
    }

    return maxLen;
}

int main() {
    string s = "eceba";
    int k = 2;

    cout << "Longest length with at most " << k << " distinct characters: "
         << lengthOfLongestSubstringKDistinct(s, k) << endl;

    return 0;
}
