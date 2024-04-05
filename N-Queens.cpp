class Solution {public:
   int isSafe(int row, int col, vector<vector<int>>& board, int n) {
       int x = row;
       int y = col;
       // Check for same row
       while (y >= 0) {
           if (board[x][y] == 1) {
               return false;
           }
           y--;
       }
       // Check for diagonal
       x = row;
       y = col;
       while (x >= 0 && y >= 0) {
           if (board[x][y] == 1) {
               return false;
           }
           x--;
           y--;
       }
       // Check for diagonal
       x = row;
       y = col;
       while (x < n && y >= 0) {
           if (board[x][y] == 1) {
               return false;
           }
           x++;
           y--;
       }
       return true;
   }
   void add(vector<vector<int>>& board, vector<vector<string>>& ans, int n) {
       vector<string> temp;
       for (int i = 0; i < n; i++) {
           string row = "";
           for (int j = 0; j < n; j++) {
               row += (board[i][j] == 1) ? 'Q' : '.';
           }
           temp.push_back(row);
       }
       ans.push_back(temp);
   }
   void solve(int col, vector<vector<string>>& ans, vector<vector<int>>& board, int n) {
       // Base case
       if (col == n) {
           add(board, ans, n);
           return;
       }
       for (int row = 0; row < n; row++) {
           if (isSafe(row, col, board, n)) {
               board[row][col] = 1;
               solve(col + 1, ans, board, n);
               // Backtrack
               board[row][col] = 0;
           }
       }
   }
   vector<vector<string>> solveNQueens(int n) {
       vector<vector<int>> board(n, vector<int>(n, 0));
       vector<vector<string>> ans;
       solve(0, ans, board, n);
       return ans;
   }};