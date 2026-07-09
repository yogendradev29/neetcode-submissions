class Solution {
public:
void helper(int idx,int target,vector<int>&nums,vector<int>&current,vector<vector<int>>&ans){
    if(target==0){
        ans.push_back(current);
        return;
    }
    if(target<0 ||idx==nums.size()){
        return;
    }
    helper(idx+1,target,nums,current,ans);
    
    current.push_back(nums[idx]);
    helper(idx,target-nums[idx],nums,current,ans);
    current.pop_back();
}
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        vector<int>current;
        helper(0,target,nums,current,ans);
        return ans;
    }
};
