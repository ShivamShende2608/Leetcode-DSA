#include<bits/stdc++.h>
using namespace std;

void findDuplicates(vector<int>arr){
    unordered_set<int>seen;
    unordered_set<int>dup;
    
    for(int num :arr){
        if(seen.find(num) != seen.end()){
            dup.insert(num);
            
        }else{
            seen.insert(num);
            
        }
    }
    
    for(int d:dup)cout<<d<<" ";
    cout<<endl;
}

int main(){
    vector<int>arr={4,3,2,7,8,2,3,1};
    findDuplicates(arr);
    return 0;
}
