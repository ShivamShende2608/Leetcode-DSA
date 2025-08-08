class Solution {
public:
    string decodeString(string s) {
        stack<int>counts;
        stack<string>strs;
        string current="";
        int k=0;
         
         for(char c:s) {
        if(isdigit(c)){
            k=k*10 +(c-'0');
        }else if(c=='['){
            counts.push(k);
            strs.push(current);
            k=0;
            current="";

        }else if(c==']'){
            int repeatTimes=counts.top(); counts.pop();
            string prev=strs.top(); strs.pop();
            string temp="";
            for(int i=0; i< repeatTimes; ++i)temp+=current;

            current=prev+temp;
        }else{
            current.push_back(c);
        }
         }
         return current;
    }
};
