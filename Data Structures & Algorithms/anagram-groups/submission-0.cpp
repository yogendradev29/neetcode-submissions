class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>group;
        vector<vector<string>>ans;
        for(string st:strs){
            string temp=st;
            sort(temp.begin(),temp.end());
            group[temp].push_back(st);
        }
        for(auto& it:group){
            ans.push_back(it.second);
        }
        return ans;
    }
};
