class Solution {
public:
    int lengthOfLastWord(string s) {
        int right=s.size()-1;
        while(right>=0 && s[right]==' '){
            right--;
        }
        int count=0;
        while(right>=0 && s[right]!=' '){
            right--;
            count++;
        }
        return count;
    }
};