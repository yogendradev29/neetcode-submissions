class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int right=0,left=0;
        int ans=0;
        unordered_map<char,int>seen;
        while(right<s.size()){
            if(seen.find(s[right])!=seen.end() && seen[s[right]]>=left){
               left=max(left,seen[s[right]]+1);
              
            }
            seen[s[right]]=right;
            ans=max(ans,right-left+1);
            right++;
        }
        return ans;
    }
};
