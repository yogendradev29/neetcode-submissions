class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // Map a frequency-count string to its group of anagrams
        unordered_map<string, vector<string>> group;
        vector<vector<string>> ans;
        
        for (const string& st : strs) {
            // Count frequencies of each character (a-z)
            vector<int> count(26, 0);
            for (char c : st) {
                count[c - 'a']++;
            }
            
            // Convert the frequency array into a unique string key
            string key = "";
            for (int i = 0; i < 26; i++) {
                key += "#" + to_string(count[i]); 
            }
            
            group[key].push_back(st);
        }
        
        for (auto& it : group) {
            ans.push_back(it.second);
        }
        
        return ans;
    }
};