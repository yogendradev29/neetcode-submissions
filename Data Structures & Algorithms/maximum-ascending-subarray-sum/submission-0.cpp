class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
     
        int current=nums[0];
        int maximum=nums[0];
       for(int i=1;i<nums.size();i++){
        if(nums[i-1]<nums[i]){
            current+=nums[i];
        }else{
            current=nums[i];
        }
        maximum=max(maximum,current);
       }
       return maximum;
    }
};