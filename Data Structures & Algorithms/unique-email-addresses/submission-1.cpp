class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string>seen;
        for(int i=0;i<emails.size();i++){
            int k=0;
            while(emails[i][k]!='@' && k<emails[i].size()){
                k++;
            }
            string local="";
            string domain="";
            int j=0;
            while(emails[i][j]!='+' && emails[i][j]!='@' ){
                if(emails[i][j]=='.'){
                    j++;
                    continue;
                }
                local+=emails[i][j];
                j++;
            }
            k=k+1;
            while(k<emails[i].size()){
 domain+=emails[i][k];
 k++;
            }
            string final=local+'@'+domain;
            seen.insert(final);
        }
        return seen.size();
    }
};