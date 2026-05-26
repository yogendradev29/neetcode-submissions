class Solution {
public:

    string encode(vector<string>& strs) {
        int n=strs.size();
      string encoded="";
      for(string s:strs){
       int size=s.length();
       encoded+=to_string(size)+"#"+s;

       
      }
    return encoded;
    }

    vector<string> decode(string s) {
        vector<string>ans;
    int i=0,j=0;
    while(i<s.size()){
        int j=i;
        while(s[j]!='#'){
            j++;
        }
        int length=stoi(s.substr(i,j-i));
        ans.push_back(s.substr(j+1,length));
        i=j+1+length;
    }
    return ans;
    }
};
