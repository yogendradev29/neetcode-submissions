class Solution {
public:

void helper(int idx,vector<int>&nums,vector<int>&current,vector<vector<int>>&result){
    if(idx==nums.size()){
        result.push_back(current);
        return;
    }
    helper(idx+1,nums,current,result);
    current.push_back(nums[idx]);
    helper(idx+1,nums,current,result);
    current.pop_back();
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>result;
        vector<int>current;
        helper(0,nums,current,result);
        return result;
        
    }
};
