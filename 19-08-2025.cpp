class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==0)return 0;
        if(n==1)return nums[0];
        
        int previous1=nums[0];
        int previous2 = 0;
        int current;

        for(int i = 1;  i < n; i++){
            current=max(previous1, nums[i]+previous2);
            previous2=previous1;
            previous1=current;
        }
        return current;
        
    }
};
