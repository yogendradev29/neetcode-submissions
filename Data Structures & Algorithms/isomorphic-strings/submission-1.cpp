class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }
        
        // 1. Rename maps to avoid conflicting with string s and string t
        unordered_map<char, char> mapS;
        unordered_map<char, char> mapT;
        
        // 2. Fixed the loop condition syntax (added 'i')
        for (int i = 0; i < s.size(); i++) {
            char char_s = s[i];
            char char_t = t[i];
            
            // Check if char_s already has a partner in mapS
            if (mapS.count(char_s)) {
                if (mapS[char_s] != char_t) {
                    return false; // Broken rule!
                }
            } else {
                // If it doesn't have a partner, check if char_t is already taken by someone else
                if (mapT.count(char_t)) {
                    return false; // char_t is a cheater!
                }
                
                // If both are free, pair them up
                mapS[char_s] = char_t;
                mapT[char_t] = char_s;
            }
        }
        
        return true;
    }
};
