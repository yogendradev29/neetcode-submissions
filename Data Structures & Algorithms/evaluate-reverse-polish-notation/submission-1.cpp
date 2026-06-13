class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        int first=0,second=0;
        for(int i=0;i<tokens.size();i++){
            if( tokens[i]=="+"){
                 first=st.top();
                st.pop();
                 second=st.top();
                st.pop();
                st.push(second+first);
                first=0;second=0;
            }else if(!st.empty() && tokens[i]=="*"){
                 first=st.top();
                st.pop();
                 second=st.top();
                st.pop();
                st.push(second*first);
                first=0;second=0;
            }else if( !st.empty() && tokens[i]=="-"){
                 first=st.top();
                st.pop();
                 second=st.top();
                st.pop();
                st.push(second-first);
                first=0;second=0;
            }else if(tokens[i]=="/"){
                 first=st.top();
                st.pop();
                 second=st.top();
                st.pop();
                st.push(second/first);
                first=0;second=0;
            }
            else{
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }
};
