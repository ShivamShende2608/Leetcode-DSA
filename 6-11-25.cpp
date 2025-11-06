class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        if(nums.empty())return 0;

        int maxVal=0;
        for(int x:nums)if(x>maxVal)maxVal=x;

        vector<long long>gain(maxVal+1,0);
        for(int x:nums)gain[x]+=x;

        long long prev2=0;
        long long prev1=0;

        for(int v=0;v<=maxVal;++v){
            long long take=prev2+gain[v];
            long long skip=prev1;
            long long cur=(take > skip)?take:skip;

            prev2=prev1;
            prev1=cur;
        }
        return prev1;

        
    }
};
