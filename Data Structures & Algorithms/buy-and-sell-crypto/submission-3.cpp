class Solution {
public:
    int maxProfit(vector<int>& nums) {
        
        int curr_min=INT_MAX;
        int ans=0,current=0;
        for(int i=0;i<nums.size();i++){
        if(nums[i]<curr_min){
            curr_min=nums[i];
        }
       
         current=nums[i]-curr_min;
         ans=max(ans,current);
        }
        return ans;
    }
};
