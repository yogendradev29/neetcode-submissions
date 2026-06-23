class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int>st;
        vector<int>ans(temperatures.size(),0);
      for(int i=0;i<temperatures.size();i++){
        int current=temperatures[i];
        
            while(!st.empty() && temperatures[st.top()]<current){
          int popped_idx=st.top();
          st.pop();
            ans[popped_idx]=i-popped_idx;
        }
        st.push(i);
      }
      return ans;
    }
};
