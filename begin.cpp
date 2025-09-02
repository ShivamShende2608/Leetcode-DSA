#include <bits/stdc++.h>
using namespace std;

int maxSubarray(vector<int>&nums){
    int n = nums.size();
    int sum=0;
    int maxSum=INT_MIN;
    
    for(int i=0; i< n; i++){
        sum+=nums[i];
        maxSum=max(maxSum,sum);
        
        if(sum<0)sum=0;
    }
    return maxSum;
}

int main(){
    vector<int>nums={-1,-5,3,-1,9};
    int ans=maxSubarray(nums);
    cout << "Output: " << ans <<  "\n";
    cout<<endl;
    return 0;
}
