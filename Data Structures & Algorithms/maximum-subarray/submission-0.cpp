class Solution {
public:
    int maxSubArray(vector<int>& nums) {
int global_max=nums[0];
int currSum=nums[0];
for(int i=1;i<nums.size();i++){
     
currSum = max(nums[i], currSum + nums[i]);
    
    
   
    global_max=max(currSum,global_max);
}
return global_max;
    }
};
