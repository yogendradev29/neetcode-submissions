class Solution {
public:
    void sortColors(vector<int>& nums) {
        //0=red
        //1=white
        //2=blue
        int l=0,r=nums.size()-1;
        int i=0;

        while(i<=r){
            if(nums[i]==0){
                swap(nums[l],nums[i]);
                i++;
                l++;
            }
            else if(nums[i]==2){
                swap(nums[i],nums[r]);
                r--;
                
            }
            else{
                i++;
            }
        }
    }
};