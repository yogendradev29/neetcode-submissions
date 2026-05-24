class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans="";
        int first=0,second=0;
       int i=0;
        while(first<word1.size() && second<word2.size()){
        ans.push_back(word1[first]);

        
        ans.push_back(word2[second]);
        
        first++;
        second++;
        }
        if(first<word1.size()){
            while(first<word1.size()){
                ans.push_back(word1[first]);
                
                first++;
            }
        }
         if(second<word2.size()){
            while(second<word2.size()){
                ans.push_back(word2[second]);
                
                second++;
            }
        }
        return ans;
    }
};