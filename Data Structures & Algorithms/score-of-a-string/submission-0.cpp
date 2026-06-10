class Solution {
public:
    int scoreOfString(string s) {
        int ans=0;
        for(int i=0;i<s.size()-1;i++){
          int s1=s[i];
          int s2=s[i+1];
          ans+=abs(s2-s1);
        }
        return ans;
    }
};