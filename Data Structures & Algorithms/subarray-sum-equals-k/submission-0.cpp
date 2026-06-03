class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>pre;
        pre[0]=1;
        int count=0,current_sum=0;
        for(int i=0;i<nums.size();i++){
            current_sum +=nums[i];
            int target=current_sum-k;
            if(pre.find(target)!=pre.end()){
                count +=pre[target];
            }
            pre[current_sum]++;
        
        }
        return count;
    }
};