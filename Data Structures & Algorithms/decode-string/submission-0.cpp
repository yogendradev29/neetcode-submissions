class Solution {
public:
    string decodeString(string s) {
        string ans="";
        stack<string>st1;
        stack<int>st2;
        string current="";
            int current_num=0;
        for(char ch:s){
            
            if(ch=='['){
             st1.push(current);
             st2.push(current_num);
             current="";
             current_num=0;
            }
            else if(ch==']'){
            string combined="";
            int repeat_time=st2.top(); st2.pop();
            string prev_string=st1.top(); st1.pop();
            for(int i=0;i<repeat_time;i++){
                combined+=current;
            }
            current=prev_string+combined;
            
            
        }else if(isdigit(ch)){
             current_num=current_num*10+(ch-'0');
        }else{
            current+=ch;
        }
        }
        return current;
    }
};