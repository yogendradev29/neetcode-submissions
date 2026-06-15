class Solution {
public:
    vector<int> asteroidCollision(vector<int>& nums) {
        stack<int>st;
        vector<int>ans;
        
        for(int i=0;i<nums.size();i++){
          int curr=nums[i];
          bool survive=true;
          while(!st.empty()&& st.top()>0 && curr<0){
            if(st.top()<abs(curr)){
                st.pop();
                continue;
            }else if(st.top()==abs(curr)){
                st.pop();
                survive=false;
                break;
            }else{
                survive=false;
                break;
            }
          }
          if(survive){
            st.push(curr);
          }
        }
        while(!st.empty()) {
    ans.push_back(st.top());
    st.pop();
}
reverse(ans.begin(), ans.end()); // Brings it back to left-to-right order
return ans;

    }
};