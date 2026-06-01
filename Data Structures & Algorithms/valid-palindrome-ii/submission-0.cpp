class Solution {
public:

bool valid(string& s,int left,int right){
   while(left<right){
    if(!isalnum(s[left])){
        left++;
        continue;
    }

     if(!isalnum(s[right])){
        right--;
        continue;
    }
    if(tolower(s[left])!=tolower(s[right])){
     return false;
    }
    left++;
    right--;
   } 
   return true;
}

    bool validPalindrome(string s) {
        bool ans=true;
        int left=0,right=s.size()-1;
        int skip=1;
        while(left<right){
            if(s[left]!=s[right]){
            return (valid(s,left+1,right) || valid(s,left,right-1));
            }
            left++;
            right--;
        }
        return ans;
    }
};