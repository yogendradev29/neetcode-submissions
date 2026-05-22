class Solution {
public:
    int maxArea(vector<int>& heights) {
       int ans=0;

       int left=0,right=heights.size()-1;
       while(left<right){
        int width=right-left;
        int height=min(heights[left],heights[right]);
        int water=height*width;
        ans=max(ans,water);
        if(heights[left]<heights[right]){
            left++;
        }else{
            right--;
        }
       } 
       return ans;
    }
};
