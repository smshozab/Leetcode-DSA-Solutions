class Solution {public:
   int tribonacci(int n) {
       int t[n+3];
       t[0]=0;
       t[1]=1;
       t[2]=1;
       for(int i=3;i<n+1;i++){
           t[i]=t[i-3]+t[i-2]+t[i-1];
       }
       return t[n];
   }};