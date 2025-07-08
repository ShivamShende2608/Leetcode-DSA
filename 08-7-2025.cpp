class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.length() > s2.length()) return false;

        vector<int> s1Freq(26, 0);
        vector<int> windowFreq(26, 0);

        for (int i = 0; i < s1.length(); i++) {
            s1Freq[s1[i] - 'a']++;
            windowFreq[s2[i] - 'a']++;
        }

        if (s1Freq == windowFreq) return true;

        for (int i = s1.length(); i < s2.length(); i++) {
            windowFreq[s2[i] - 'a']++;
            windowFreq[s2[i - s1.length()] - 'a']--;

            if (windowFreq == s1Freq) return true;
        }

        return false;
    }
};
