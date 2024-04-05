class Solution {public:
   bool isSafe(int row, int col, vector<vector<char>>& sudoku, char val){
       int n = sudoku.size();
       // Row and Column Check
       for(int i = 0; i < n; i++){
           if(sudoku[row][i] == val || sudoku[i][col] == val){
               return false;
           }
       }
       // 3x3 matrix Check
       // int boxStartRow = row - row % 3;
       // int boxStartCol = col - col % 3;
       for(int i = 0; i < 3; i++){
           for(int j = 0; j < 3; j++){
               if(sudoku[i + row - row % 3][j + col - col % 3] == val){
                   return false;
               }
           }
       }
       return true;
   }
   bool solve(vector<vector<char>>& sudoku){
       int n = sudoku.size();
       for(int i = 0; i < n; i++){
           for(int j = 0; j < n; j++){
               //Finding if cell is empty or not
               if(sudoku[i][j] == '.'){
                   for(char val = '1'; val <= '9'; val++){
                       if(isSafe(i, j, sudoku, val)){
                           sudoku[i][j] = val;
                           //recursive call
                           if(solve(sudoku)){
                               return true;
                           }
                           else{
                               //backtrack
                               sudoku[i][j] = '.';
                           }
                       }
                   }
                   return false;
               }
           }
       }
       return true;
   }
   void solveSudoku(vector<vector<char>>& board) {
       solve(board);
   }};