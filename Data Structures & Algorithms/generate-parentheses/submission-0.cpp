class Solution {
public:

void helper(int n,int opening,int closing,string& current,vector<string>&ans){
if(current.size()==n*2){
    ans.push_back(current);
}
 if(opening<n){
    current.push_back('(');
    helper(n,opening+1,closing,current,ans);
    current.pop_back();
 }
 if(closing<opening){
    current.push_back(')');
    helper(n,opening,closing+1,current,ans);
    current.pop_back();
 }


}

    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string current;
        helper(n,0,0,current,ans);
        return ans;
    }
};
