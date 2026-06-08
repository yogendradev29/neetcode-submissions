class Solution {
public:
    int characterReplacement(string s, int k) {
      unordered_map<char,int>freq;
      int ans=0;
    int left=0,right=0;
    int max_freq=0;
    int max_len=0;
    while(right<s.size()){
        freq[s[right]]++;
        max_freq=max(max_freq,freq[s[right]]);
        int window=right-left+1;
        while(window-max_freq>k){
            freq[s[left]]--;
            left++;
            window=right-left+1;
        }
        max_len=max(max_len,window);
        right++;


    }
    return max_len;

    }
};
