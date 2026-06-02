class Solution {
public:


    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>>row(9);
        vector<unordered_set<char>>col(9);
        vector<vector<unordered_set<char>>>boxes(3,vector<unordered_set<char>>(3));
        for(int r=0;r<9;r++){
            for(int c=0;c<9;c++){
                if(board[r][c]=='.'){
                    continue;
                }
                int box_r=r/3;
                int box_c=c/3;
                if(row[r].count(board[r][c])){
                    return false;
                }
                if(col[c].count(board[r][c])){
                    return false;
                }
                if(boxes[box_r][box_c].count(board[r][c])){
                    return false;
                }
                row[r].insert(board[r][c]);
                col[c].insert(board[r][c]);
                boxes[box_r][box_c].insert(board[r][c]);

            }
        }
        return true;
        
    }
};
