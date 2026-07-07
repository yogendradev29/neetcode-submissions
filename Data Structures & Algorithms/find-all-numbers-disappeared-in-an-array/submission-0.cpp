class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>freq;
        vector<int>ans;
        for(int num:nums){
            freq[num]++;
        }
        for(int i=1;i<=n;i++){
            if(!freq.count(i)){
                ans.push_back(i);
            }
        }
        return ans;

    }
};