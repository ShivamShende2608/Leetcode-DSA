#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>&nums, int target){
    int n=nums.size();
    int low=0;
    int high=n-1;
    
    while(low<=high){
        int mid = low + (high -low)/2;
        
        if(nums[mid]==target)return mid;
        else if(nums[mid] <target)
          low=mid+1;
         else
           high=mid-1;
           
    }
    return -1;
}

int main(){
    int n, target;
    cout<<"Enter size of array:";
    cin>>n;
    
     vector<int> nums(n);
    cout<<"enter elements :";
    for(int i=0; i< n; i++) cin>>nums[i];
    
    cout<<"enter target:";
    cin>>target;
    
    int result=binarySearch(nums,target);
    
    if(result!=-1)
    cout<<"element found at index:"<<result<<endl;
    else
     cout<<"element not exist"<<endl;
     
     return 0;
}
