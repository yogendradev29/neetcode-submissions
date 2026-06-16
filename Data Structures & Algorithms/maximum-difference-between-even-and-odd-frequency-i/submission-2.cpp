class Solution {
public:
    int maxDifference(string s) {
       unordered_map<char,int>freq;
       for(char ch:s){
        freq[ch]++;
       } 
       int min_even=INT_MAX;
       int max_odd=0;
       for(auto& it:freq){
        if(it.second%2==0){
            min_even=min(min_even,it.second);
        }
        if(it.second%2!=0){
            max_odd=max(max_odd,it.second);
        }
       }
       return (max_odd-min_even);
    }
};