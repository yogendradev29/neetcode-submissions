class Solution {
public:
    bool canPlaceFlowers(vector<int>& flower, int n) {
        
        
        
        for(int i=0;i<flower.size();i++){
            if(flower[i]==0 && (i==0 || flower[i-1]==0) && (i==flower.size()-1 || flower[i+1]==0)){
                flower[i]=1;
                n--;
            }
        }
        return n<=0;

    }
};