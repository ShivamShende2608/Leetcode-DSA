#include<bits/stdc++.h>
using namespace std;

bool isvalid(string s){
    stack<char>st;
    
    for(char c : s){
        if(c=='(' || c=='{' || c=='['){
            st.push(c);
            
        }
        else{
            if(st.empty()) return false;
            
            char top=st.top();
            st.pop();
            
            if((c==')' && top!='(')||
            (c=='}' && top!='{')||
            (c==']' && top!='['))return false;
        }
    }
    return st.empty();
}

int main(){
    string s;
    cout<<"enter the  string brackets:";
    cin>>s;
    
    if(isvalid(s))
       cout<<"yes it is valid\n";
    else
       cout<<"not valid\n";
       
       return 0;
}
