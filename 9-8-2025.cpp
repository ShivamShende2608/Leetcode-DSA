class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.length();
        int m=t.length();

        if(m>n){
            return "";
        }

        unordered_map<char,int> mp;

        for(char &ch: t)
            mp[ch]++;

        int requiredCount =m;
        int i=0, j=0;

        int minwindowSize=INT_MAX;
        int start_i=0;

        while(j<n){
            char ch =s[j];

            if(mp[ch]>0)
            requiredCount--;

            mp[ch]--;

            while(requiredCount==0){

                int currWindowSize=j-i+1;

                if(minwindowSize > currWindowSize){
                    minwindowSize=currWindowSize;
                    start_i=i;
                }
                mp[s[i]]++;

                if(mp[s[i]] > 0){
                    requiredCount++;
                }
                i++;
            }
            j++;
        }
        return minwindowSize ==INT_MAX ? "": s.substr(start_i, minwindowSize);    
   
    }
};
