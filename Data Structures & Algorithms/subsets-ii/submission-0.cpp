class Solution {
public:

void helper(int idx,vector<int>&current,vector<vector<int>>&ans,vector<int>&nums){
    ans.push_back(current);

    for(int i=idx;i<nums.size();i++){
        if(i>idx && nums[i]==nums[i-1]) continue;
        current.push_back(nums[i]);
        helper(i+1,current,ans,nums);
        current.pop_back();
    }
}

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>current;
        helper(0,current,ans,nums);
        return ans;
    }
};
