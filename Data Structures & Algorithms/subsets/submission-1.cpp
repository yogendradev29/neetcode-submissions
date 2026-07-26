class Solution {
public:
void helper(int idx,vector<int>&current,vector<vector<int>>&ans,vector<int>&nums){
    if(idx==nums.size()){
        ans.push_back(current);
        return;
    }
    current.push_back(nums[idx]);
    helper(idx+1,current,ans,nums);
    
    current.pop_back();
     helper(idx+1,current,ans,nums);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>current;
        helper(0,current,ans,nums);
        return ans;
    }
};
