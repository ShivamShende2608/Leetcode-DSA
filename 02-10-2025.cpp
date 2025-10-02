#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s , string t){
    if(s.size()!= t.size()) return false;
    
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t){ 
    return true;
    }else{
        return false;
    }
    
}

int main(){
    string s1="listen",s2="silent";
    
    if(isAnagram(s1,s2))
      cout<<"True"<<endl;
    else
      cout<<"false"<<endl;
    return 0;
}
