class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max_p=nums[0];
        int min_p=nums[0];
        int global=nums[0];
        for(int i=1;i<nums.size();i++){
       

       if(nums[i]<0){
            swap(min_p,max_p);
          
          }
         min_p=min(min_p*nums[i],nums[i]);
            max_p=max(max_p*nums[i],nums[i]);
          
          global=max(global,max_p);

        }
        return global;
    }
};