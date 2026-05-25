class Solution {
public:
    int search(vector<int>& arr, int target) {
     int left=0,right=arr.size();
     while(left<right){
        int mid=left+(right-left)/2;
        if(arr[mid]==target) return mid;
        if(arr[mid]>target){
            right=mid;
        }else{
            left=mid+1;
        }
     }   
     return -1;
    }
};
