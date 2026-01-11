class Solution {
public:

    vector<int>computeLPS(string &pat){
        int n=pat.size();
        vector<int>lps(n,0);

        for(int i=1;i<n;i++){
            int len=lps[i-1];

            while(len > 0 && pat[i]!=pat[len]){
                len=lps[len-1];
            }

            if(pat[i]==pat[len]){
                len++;
            }
            lps[i]=len;
        }
        return lps;
    }

    vector<int>kmpSearch(string &text,string &pat){
        vector<int>lps=computeLPS(pat);
        vector<int>res;

        int i=0, j=0;

        while(i < text.size()){
            if(text[i]==pat[j]){
                i++;
                j++;
            }

            if(j==pat.size()){
                res.push_back(i-j);
                j=lps[j-1];
            }else if(i < text.size() && text[i]!=pat[j]){
                if(j!=0)
                j=lps[j-1];
             else
                i++;   
            }
        }
        return res;
    }
    vector<int> beautifulIndices(string s, string a, string b, int k) {

        vector<int>posA=kmpSearch(s,a);
        vector<int>posB=kmpSearch(s,b);

        vector<int>ans;
        int j=0;


        for(int i=0;i<posA.size();i++){
            while(j<posB.size() && posB[j] < posA[i]-k)
            j++;

            if(j < posB.size() && abs(posB[j] - posA[i]) <= k)
            ans.push_back(posA[i]);
        }


        return ans;
        
    }
};
