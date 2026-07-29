class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int>freq;
        for(char ch:chars){
            freq[ch]++;
        }
        int total=0;
        for(int i=0;i<words.size();i++){
            string current=words[i];
            unordered_map<char,int>temp=freq;
            bool canForm=true;
            for(char c:current){
                if(temp[c]>0){
                    temp[c]--;
                }else{
                    canForm=false;
                    break;
                }
            }

                  if(canForm){
                total+=current.size();
            
               
            }
          

        }
         return total;
    }
};