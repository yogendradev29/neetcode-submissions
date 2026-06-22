class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        
        int current_inc=1;
        int current_dec=1;
     int count_max=1;
        for(int i=0; i<nums.size()-1;i++){
        if(nums[i+1]>nums[i]){
            count_max++;
            current_inc=max(current_inc,count_max);
        }else{
            count_max=1;
        }
        }

int count_min=1;

         for(int i=0; i<nums.size()-1;i++){
        if(nums[i+1]<nums[i]){
            count_min++;
            current_dec=max(current_dec,count_min);
        }else{
            count_min=1;
        }
        }
        return max(current_dec,current_inc);
    }
};