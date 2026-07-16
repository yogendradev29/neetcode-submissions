class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int ans=0;
        int left=1;
        int right=INT_MIN;
        for(int i=0;i<piles.size();i++){
            if(piles[i]>right){
                right=piles[i];
            }
        }
        while(left<=right){
            int k=left+(right-left)/2;
            long long total=0;
            for(int i=0;i<piles.size();i++){
     total+=ceil((double)piles[i]/k);
            }
            if(total<=h){
              ans=k;
              right=k-1;
            }else{
                left=k+1;
            }
        }
        return ans;


    }
};
