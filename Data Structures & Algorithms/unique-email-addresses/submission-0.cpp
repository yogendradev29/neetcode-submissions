class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        int ans=0;
        unordered_set<string>seen;
        for(int i=0;i<emails.size();i++){
            int idx=-1;
            int k=0;
            string temp=emails[i];
            while(temp[k]!='@' && k<temp.size()){
             k++;
            }
            string local="";
            int j=0;
            while(temp[j]!='+' && temp[j]!='@'){
                if(temp[j]=='.'){
                    j++;
                    continue;
                }
                
                local+=temp[j];
                j++;
            }
            string domain="";
            k=k+1;
            while(k<temp.size()){
              domain+=temp[k];
              k++;
            }
            string final=local+'@'+domain;
            seen.insert(final);

        }
        return seen.size();
    }
};