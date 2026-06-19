class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>freq;
        for(int num:arr){
            freq[num]++;
        }
        int max_lucy=-1;
        for(auto& it:freq){
            if(it.first==it.second){
                max_lucy=max(max_lucy, it.first);
            }
        }
        return max_lucy;
    }
};