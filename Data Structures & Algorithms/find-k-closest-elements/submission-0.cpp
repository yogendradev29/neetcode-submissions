class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int left=0,right=arr.size()-k;
        
        while(left<right){
            int mid=left+(right-left)/2;
            int d1=abs(x-arr[mid]);
            int d2=abs(arr[mid+k]-x);
            if(d1>d2){
                left=mid+1;
            }else{
                right=mid;
            }
        }
        return vector<int>(arr.begin()+left,arr.begin()+left+k);
    }
};