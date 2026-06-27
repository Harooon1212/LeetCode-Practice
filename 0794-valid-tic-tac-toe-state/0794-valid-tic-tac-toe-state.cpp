class Solution {
public:
    bool Is_Winner(vector<string>& board, char ch) {
        // rows
        for (int j = 0; j < 3; j++) {
            if (board[j][0] == ch && board[j][1] == ch && board[j][2] == ch)
                return true;
        }
        // columns
        for (int j = 0; j < 3; j++) {
            if (board[0][j] == ch && board[1][j] == ch && board[2][j] == ch)
                return true;
        }
        // main diagonal
        if (board[0][0] == ch && board[1][1] == ch && board[2][2] == ch)
            return true;

        // anti-diagonal
        if (board[0][2] == ch && board[1][1] == ch && board[2][0] == ch)
            return true;

        return false;
    }
    bool validTicTacToe(vector<string>& board) {
        int X = 0, O = 0;
        bool X_win = Is_Winner(board, 'X');
        bool O_win = Is_Winner(board, 'O');
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i][j] == 'O')
                    O++;
                if (board[i][j] == 'X')
                    X++;
            }
        }
        if (!(X == O || X == O + 1))
            return false;
        if (X_win && O_win)
            return false;
        if (X_win && X != O + 1)
            return false;
        if (O_win && X != O)
            return false;

        return true;
    }
};