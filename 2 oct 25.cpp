#include<bits/stdc++.h>
using namespace std;

int firstUniqChar(string s){
    vector<int>count(26,0);
    
    
    //step 1: count frequency of each char
    for(char c:s){
        count[c-'a']++;
    }
    
    //step 2: Find first char with frequency==1
    for(int i=0; i<s.size();i++){
        if(count[s[i]-'a']==1)
          return i;
    }
    return -1;//no unique char
}

int main(){
    string s;
    cout<<"Enter a string :";
    cin>>s;
    
    int index=firstUniqChar(s);
    if(index==-1)
      cout<<"No non-repeating character found"<<endl;
      else
        cout<<"First non-repeating character:"<<s[index]<<" at index"<<index<<endl;
        
        return 0;
}
