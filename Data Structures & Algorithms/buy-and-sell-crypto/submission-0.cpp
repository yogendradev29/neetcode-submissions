class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        for(int i=0;i<prices.size();i++){
            for(int j=i+1;j<prices.size();j++){
                int diff=prices[j]-prices[i];
                ans=max(ans,diff);
            }
        }
        return ans;

    }
};
