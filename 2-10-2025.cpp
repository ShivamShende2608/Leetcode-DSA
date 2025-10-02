#include<bits/stdc++.h>
using namespace std;

string reverseString(string s){
    int left=0;
    int right= s.size()-1;
    
    while(left<right){
        swap(s[left],s[right]);
        left++;
        right--;
    }
    return s;
}

int main(){
    string str="hello";
    cout<<"Original:"<<str<<endl;
    cout<<"Reversed:"<<reverseString(str)<<endl;
    return 0;
}
