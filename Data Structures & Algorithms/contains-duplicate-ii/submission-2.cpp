class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int i=0,j=1;
        unordered_map<int,int>m;
        
        for(int i=0;i<nums.size();i++){
        if(m.count(nums[i])){
            int dist=i-m[nums[i]];
            if(dist<=k){
                return true;
            }
            
        }
        m[nums[i]]=i;
        }
        return false;
    }
};