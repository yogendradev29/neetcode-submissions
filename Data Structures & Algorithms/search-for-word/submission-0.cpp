class Solution {
public:

bool helper(int r,int c,int idx,vector<vector<char>>&board,string& word){
    if(idx==word.size()){
        return true;
    }
    if(r<0 || r>=board.size() || c<0 || c>=board[0].size()){
        return false;
    }
     if(board[r][c]!=word[idx]) return false;
char temp=board[r][c];
board[r][c]='#';
    bool found=helper(r-1,c,idx+1,board,word) ||
    helper(r+1,c,idx+1,board,word) ||
    helper(r,c-1,idx+1,board,word) ||
    helper(r,c+1,idx+1,board,word);

    board[r][c]=temp;

    return found;
}

    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]==word[0]){
                    if(helper(i,j,0,board,word)){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};
