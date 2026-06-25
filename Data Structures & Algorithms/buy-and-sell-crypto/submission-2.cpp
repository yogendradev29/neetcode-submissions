class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int min_price=INT_MAX;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<min_price){
               min_price=prices[i];
            }
            int diff=prices[i]- min_price;
            ans=max(ans,diff);
        }
        return ans;
    }
};
