class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string>freq;
        unordered_map<string,char>freq2;

        vector<string>s1;
        stringstream ss(s);
        string word;
        while(ss>>word){
            s1.push_back(word);
        }
        if(pattern.size()!=s1.size()) return false;
        for(int i=0;i<pattern.size();i++){
            char c=pattern[i];
            string w=s1[i];
            if(freq.count(c) && freq[c]!=w) return false;
            if(freq2.count(w) && freq2[w]!=c) return false;
            freq[c]=w;
            freq2[w]=c;
        }
        return true;
        


    }
};