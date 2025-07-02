// Leetcode 438: Find All Anagrams in a String
// Sliding Window + Frequency Count (Optimized O(n))

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        if (s.size() < p.size()) return res;

        vector<int> pCount(26, 0), sCount(26, 0);

        for (char c : p)
            pCount[c - 'a']++;

        int window = p.size();

        for (int i = 0; i < window; i++)
            sCount[s[i] - 'a']++;

        if (sCount == pCount)
            res.push_back(0);

        for (int i = window; i < s.size(); i++) {
            sCount[s[i] - 'a']++;                     // Add right char
            sCount[s[i - window] - 'a']--;            // Remove left char

            if (sCount == pCount)
                res.push_back(i - window + 1);
        }

        return res;
    }
};

// 🚀 Driver Code for Local Testing
int main() {
    Solution sol;
    string s = "cbaebabacd";
    string p = "abc";

    vector<int> result = sol.findAnagrams(s, p);

    cout << "Anagram starting indices: ";
    for (int index : result)
        cout << index << " ";
    cout << endl;

    return 0;
}
