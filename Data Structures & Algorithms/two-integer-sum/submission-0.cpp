class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>seen;
        for(int i=0;i<nums.size();i++){
            int second=target-nums[i];
            if(seen.find(second)!=seen.end()){
                return {seen[second],i};
            }
            seen[nums[i]]=i;
        }
        return {};
    }
};
