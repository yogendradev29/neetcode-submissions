class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n=nums.size();
        if(n%2==1) return false;
        unordered_map<int,int>freq;
        for(int num:nums){
            freq[num]++;
        }
        for(auto& it:freq){
            if(it.second%2!=0){
                return false;
            }
        }
        return true;
        
    }
};