class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int left=0,right=s1.size()-1;
        unordered_map<char,int>freq;
         unordered_map<char,int>freq2;
        for(int i=0;i<s1.size();i++){
            freq[s1[i]]++;
            freq2[s2[i]]++;
        }
       

        while(right<s2.size()){

       if(freq==freq2){
        return true;
       }
       right++;
       if(right<s2.size()){
        freq2[s2[right]]++;
       }
       
       freq2[s2[left]]--;
       if(freq2[s2[left]]==0){
        freq2.erase(s2[left]);
       }
       left++;
        }
        return false;
    }
};
