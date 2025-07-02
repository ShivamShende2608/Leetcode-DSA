// 3.Longest Substring Without Repeating Characters
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>seen;
        int n = s.length();
        int left= 0;
        int right= 0;
        int maxlength=0;

        while( right < n){
            if(seen.find(s[right])==seen.end()){
                seen.insert(s[right]);
                maxlength=max(maxlength,right-left+1);
                right++;
            }else{
                seen.erase(s[left]);
                left++;
            }
        }
        return maxlength;
        
    }
};
