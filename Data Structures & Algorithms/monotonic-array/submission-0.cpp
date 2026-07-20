class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n=nums.size()-1;
        bool increasing=true;
        bool decreasing=true;

       for(int i=0;i<n;i++){
        if(nums[i]<nums[i+1]){
            decreasing=false;
        }
        if(nums[i]>nums[i+1]){
            increasing=false;
        }
       }
        return increasing||decreasing;
    }
};