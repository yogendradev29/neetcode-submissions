class Solution {
public:


void helper(int idx,vector<int>&current,vector<vector<int>>&ans,vector<int>&nums,int remaining,int target){
    if(remaining==0){
        ans.push_back(current);
        return;
    }
    if(idx==nums.size()||remaining<0){
        return;
    }
    current.push_back(nums[idx]);

    
        helper(idx,current,ans,nums,remaining-nums[idx],target);
        
    
    current.pop_back();
    
    helper(idx+1,current,ans,nums,remaining,target);
    

}
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        vector<int>current;
        helper(0,current,ans,nums,target,target);
        return ans;
    }
};
