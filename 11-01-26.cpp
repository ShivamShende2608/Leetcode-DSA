class Solution {
public:
    string shortestPalindrome(string s) {
        string rev=s;
        reverse(rev.begin(),rev.end());

        string temp=s+"#"+rev;


        int n=temp.size();
        vector<int>lps(n,0);

        for(int i=1;i<n;i++){
            int len=lps[i-1];

            while(len>0 && temp[i]!= temp[len]){
                len=lps[len-1];
            }

            if(temp[i]==temp[len]){
                len++;
            }
            lps[i]=len;
        }

        int palLen=lps[n-1];
        string add=s.substr(palLen);
        reverse(add.begin(),add.end());

        return add+s;
        
    }
};
