class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=1;
        int insertindex=1;
        while(i<nums.size()){
            if(nums[i]!=nums[insertindex-1]){
                nums[insertindex]=nums[i];
                insertindex++;
            }
            i++;
        }
        return insertindex;
        
    }
};