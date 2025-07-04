// Leetcode 1002

#include <iostream>
#include <vector>
#include <string>
#include <climits>
using namespace std;

class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> result;
        vector<int> minFreq(26, INT_MAX);

        for (string word : words) {
            vector<int> freq(26, 0);
            for (char c : word)
                freq[c - 'a']++;

            for (int i = 0; i < 26; i++)
                minFreq[i] = min(minFreq[i], freq[i]);
          
        }

        for (int i = 0; i < 26; i++) {
            while (minFreq[i]-- > 0) {
                result.push_back(string(1, i + 'a'));
            }
        }

        return result;
    }
};

