class Solution {
public:
void helper(int open,int close,string &current,vector<string>&ans,int n){
    if(current.size()==n*2){
        ans.push_back(current);
        return;
    }
    if(open<n){
        current+='(';
        
        helper(open+1,close,current,ans,n);
        current.pop_back();
    }
    
    
    if(close<open){
        current+=')';
        
         helper(open,close+1,current,ans,n);
         current.pop_back();
    }
   
    

}
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string current="";
        helper(0,0,current,ans,n);
        return ans;
    }
};
