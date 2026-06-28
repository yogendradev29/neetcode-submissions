class Solution {
public:
    int mySqrt(int x) {
        if(x==1)return 1;
        for(long long i=1;i<=x/2;i++){
            if(i*i==x){
                return i;
            }
            if(i*i>x){
                return i-1;
            }
        }
        return 0;
    }
};