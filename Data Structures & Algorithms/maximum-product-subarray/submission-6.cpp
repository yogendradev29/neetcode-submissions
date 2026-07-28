class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int current_max=nums[0];
        int current_min=nums[0];

        int global_max=nums[0];
        for(int i=1;i<nums.size();i++){

            if(nums[i]<0){
                swap(current_max,current_min);
            
              
            }
              current_max=max(nums[i],nums[i]*current_max);
            current_min=min(nums[i]*current_min,nums[i]);
            global_max=max(current_max,global_max);
        }
        return global_max;
    }
};
