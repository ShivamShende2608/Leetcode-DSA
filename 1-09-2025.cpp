class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int currmax=0;
        int maxSum= INT_MIN;
        int currmin=0;
        int minSum=INT_MAX;

        for(int i=0; i< n; i++){
            sum+=nums[i];

            currmax=max(nums[i],currmax + nums[i]);
            maxSum=max(maxSum,currmax);

            currmin=min(nums[i],currmin + nums[i]);
            minSum=min(minSum,currmin);

           


        }
         if(maxSum<0) return maxSum;

        return max(maxSum, sum-minSum);

        
    }
};
