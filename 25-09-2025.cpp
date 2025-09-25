class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n= prices.size();
        int maxProfit=0;
        int minPrices=INT_MAX;

        for(int i=0; i< n;i++){
            if(prices[i]<minPrices){
                minPrices=prices[i];
            }else{
                maxProfit=max(maxProfit, prices[i]-minPrices);
            }
                
        }
        return maxProfit;
        
    }
};
