class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int left=0,right=nums.size()-1;
        vector<int>ans;
        while(left<right){
            int sum=nums[left]+nums[right];
            if(sum==target){
                ans.push_back(left+1);
                ans.push_back(right+1);
                break;
            }
            if(sum>target){
                right--;
            }else{
                left++;
            }
        }
        return ans;
    }
};
