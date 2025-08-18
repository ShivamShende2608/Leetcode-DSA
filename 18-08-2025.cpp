class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int farthest=0, jumps=0, currentEnd=0;
        for(int i=0; i< n-1 ; i++){
            farthest=max(farthest, i + nums[i]);
            currentEnd--;

            if(currentEnd<0) currentEnd=0;

            if(currentEnd==0){
                jumps++;
                currentEnd= farthest-i;
            }
        }
        return jumps;
        
    }
};
