class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0,right=0;
        int ans=0;
        unordered_map<char,int>freq;
        while(right<s.size()){
            if(freq.find(s[right])!=freq.end()){
               left=max(left,freq[s[right]]+1);
               
               
               
            }
            freq[s[right]]=right;
            
            ans=max(ans,right-left+1);
            right++;

            
        }
        return ans;
        
    }
};
