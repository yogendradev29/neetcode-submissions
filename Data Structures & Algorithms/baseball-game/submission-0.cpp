class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int sum=0;
        for(int i=0;i<operations.size();i++){
           
            if(operations[i]=="C"){
                st.pop();
            }else if(operations[i]=="D"){
                st.push(2*st.top());
            }else if(operations[i]=="+"){
int top1=st.top();
st.pop();
int top2=st.top();
int new_score=top1+top2;
st.push(top1);
st.push(new_score);
            }else{
                
                st.push(stoi(operations[i]));
            }

        }
        int total_sum=0;
        while(!st.empty()){
            total_sum+=st.top();
            st.pop();
        }
        return total_sum;
    }

};