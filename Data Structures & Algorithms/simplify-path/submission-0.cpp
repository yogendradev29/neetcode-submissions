class Solution {
public:
    string simplifyPath(string path) {
        string ans="";
        stack<string>st;
        stringstream ss(path);
        string token;
        while(getline(ss,token,'/')){
            if(token=="" || token=="."){
                continue;
            }
            if(token==".."){
                if(!st.empty()){
                    st.pop();
                }
            }else{
                st.push(token);
            }
        }
        while(!st.empty()){
            string toadd=st.top();
            st.pop();
            ans ="/"+toadd+ans;
        }
        return ans.empty()? "/":ans;

    }
};