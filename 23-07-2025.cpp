class Solution {
public:
    int maximumCostSubstring(string s, string chars, vector<int>& vals) {
        unordered_map<char, int>mp;
        for(int i=0 ; i< chars.size(); i++){
            mp[chars[i]]=vals[i];
        }

        int currSum=0;
        int maxSum=INT_MIN;


        for(char  ch: s){
            int value=mp.count(ch) ? mp[ch] : (ch-'a'+1);
             currSum += value;
            if (currSum < 0) currSum = 0;
            maxSum=max(maxSum, currSum);
        }
        return maxSum;
        
    }
};
