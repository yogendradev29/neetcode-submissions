class Solution {
public:
    int appendCharacters(string s, string t) {
        int s1=0,t1=0;
        while(s1<s.size()){
            if(s[s1]==t[t1]){
                t1++;
            }
            s1++;
        }
        return t.size()-t1;
    }
};