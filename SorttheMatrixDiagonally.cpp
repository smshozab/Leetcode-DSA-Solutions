class Solution {public:
   vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
       int m=mat.size();
       int n=mat[0].size();
   for (int k=0;k<m;k++) {
       vector<int> diagonal;
       int i=k;
       int j=0;
       while (i < m && j < n) {
           diagonal.push_back(mat[i][j]);
           ++i;
           ++j;
       }
               sort(diagonal.begin(), diagonal.end());
               i = k;
       j = 0;
       int idx = 0;
       while (i < m && j < n) {
           mat[i][j] = diagonal[idx++];
           ++i;
           ++j;
       }
   }
       // Another half
   for (int k = 1; k < n; ++k) {
       vector<int> diagonal;
       int i = 0;
       int j = k;
               while (i < m && j < n) {
           diagonal.push_back(mat[i][j]);
           ++i;
           ++j;
       }
       sort(diagonal.begin(), diagonal.end());
               i = 0;
       j = k;
       int idx = 0;
       while (i < m && j < n) {
           mat[i][j] = diagonal[idx++];
           ++i;
           ++j;
       }
   }
       return mat;
   }};