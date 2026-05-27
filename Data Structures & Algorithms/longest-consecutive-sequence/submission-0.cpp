class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>seen(nums.begin(),nums.end());
       int count=0;
        for(int num:nums){
            if(seen.find(num-1)!=seen.end()){
                continue;
            }else{

                int current_length=1;
                int current_num=num;
                while(seen.find(current_num+1)!=seen.end()){
            current_num++;
           current_length++;
                }
                count=max(count,current_length);
            }
        }
        return count;
    }
};
