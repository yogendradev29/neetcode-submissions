class Solution {
public:

void helper(vector<int>&candidates,vector<vector<int>>&ans,vector<int>&current,int idx,int rem){
    if(rem==0){
        ans.push_back(current);
        return;
    }
    if(rem<0){
        return ;
    }
for(int i=idx;i<candidates.size();i++){
    if(i>idx && candidates[i]==candidates[i-1]){
        continue;
    }
    current.push_back(candidates[i]);
    helper(candidates,ans,current,i+1,rem-candidates[i]);
    current.pop_back();
}

}

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>current;
       helper(candidates,ans,current,0,target);
       return ans;
        
    }
};
