#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t){
    if(s.size()!=t.size()) return false;
    
    vector<int>freq(26,0);
    
    for(char c:s) freq[c- 'a']++;
    for(char c:t) freq[c-'a']--;
    
    for(int count:freq){
        if(count!=0)return false;
    }
    return true;
}

int main(){
    string s="listen", t="silent";
    if(isAnagram(s,t))cout<<"yes, it is anagram";
    else cout<<"no anagram";
    return 0;
}
