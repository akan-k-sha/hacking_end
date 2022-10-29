class Solution {
public:
    bool rec(vector<vector<char>>& board){
        for(int row=0;row<board.size();row++){
            for(int col=0;col<board[0].size();col++){
                if(board[row][col]=='.'){
                    for(char c='1';c<='9';c++){
                        if(canPlace(row,col,board,c)){
                            board[row][col]=c;
                            
                            if(rec(board)==true){
                                return true;
                            }
                            else{
                                board[row][col]='.';
                            }
                        }
                    }
                    return false;
                }
               
            }
        }
         return true;
    }
public:
    bool canPlace(int row, int col,vector<vector<char>>& board,char c){
        for(int i=0;i<9;i++){
            if(board[row][i]==c)
                return false;
            else if(board[i][col]==c)
                return false;
            else if(board[3*(row/3)+i/3][3*(col/3)+i%3]==c)
                return false;
        }
        return true;
        
    }
public:
    void solveSudoku(vector<vector<char>>& board) {
        rec(board);
    }
};
