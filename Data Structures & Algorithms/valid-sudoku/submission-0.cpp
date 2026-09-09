class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_set<char>> sCols,sRows,squares;

        for (int r = 0; r < 9; r++) {//for each row
            for (int c = 0; c < 9; c++){  // for each number in each row
                if(board[r][c] == '.') continue;
                //calculate square position
                int squarePos = (r/3)*3 + (c/3);

                //if num exists in one of the things
                if(sCols[c].contains(board[r][c]) || 
                sRows[r].contains(board[r][c]) || 
                squares[squarePos].contains(board[r][c])){
                    return false;
                }
                //else insert in thema
                sCols[c].insert(board[r][c]);
                sRows[r].insert(board[r][c]);
                squares[squarePos].insert(board[r][c]);
            }
        }
        return true;
    }
};
