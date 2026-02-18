class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty())return "";

        if(strs.size()==1) return strs[0];

        


        for(int i=0; i< strs[0].size();i++){
            char current=strs[0][i];
            for(int j=1; j< strs.size(); j++){
                if(i >= strs[j].size()){
                    return strs[0].substr(0,i);
                }

                if(strs[j][i]!=current){
                    return strs[0].substr(0,i);
                }
            }
        }
        return strs[0];
        
    }
};
