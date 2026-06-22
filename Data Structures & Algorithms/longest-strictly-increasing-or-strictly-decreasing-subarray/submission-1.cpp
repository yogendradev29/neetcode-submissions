class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        
        int current_inc=1;
        int current_dec=1;
        int max_length=1;
        for(int i=0; i<nums.size()-1;i++){
        if(nums[i+1]>nums[i]){
            current_inc++;
            current_dec=1;
        }else if(nums[i+1]<nums[i]){
              current_inc=1;
            current_dec++;
        }else{
            current_inc=1;
            current_dec=1;
        }
        max_length=max({max_length,current_inc,current_dec});
        }



        
        return max_length;
    }
};