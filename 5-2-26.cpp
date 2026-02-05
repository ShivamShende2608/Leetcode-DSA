class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int k=2;

        if(n <= k) return n;
    
 int slow=k;

 for(int fast=k; fast < n; fast++){
    if(nums[fast]!=nums[slow-k]){
        nums[slow]=nums[fast];
        slow++;
    }
 }
 return slow;
}
        
    
};
