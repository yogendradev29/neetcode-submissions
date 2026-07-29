class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char>seen;
        int count=0;
        for(char ch:allowed){
            seen.insert(ch);
        }
        for(int i=0;i<words.size();i++){
            string curr=words[i];
            bool isthere=true;
            for(char c:curr){
                if(!seen.count(c)){
                    isthere=false;
                    break;
                    
                }
            }
            if(isthere){
                count++;
            }
        }
        return count;
    }
};