class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m=matrix.size();
        int n=matrix[0].size();
        int low_row=0,high_row=m-1;
        int mid_row=0;
        while(low_row<=high_row){
             mid_row=low_row+(high_row-low_row)/2;
            if(matrix[mid_row][0] <= target && target <= matrix[mid_row][n-1]){
                break;
            }else if(target>matrix[mid_row][n-1]){
                low_row=mid_row+1;
            }else{
                high_row=mid_row-1;
            }

        }
        if(low_row>high_row){
            return false;
        }
        int low_col=0,high_col=n-1;
       
        while(low_col<=high_col){
             int mid_col = low_col + (high_col - low_col) / 2;
               if(matrix[mid_row][mid_col]==target){
                return true;
            }else if(matrix[mid_row][mid_col]<target){
                low_col=mid_col+1;
            }else{
                high_col=mid_col-1;
            }

        }
        return false;
    }
};
