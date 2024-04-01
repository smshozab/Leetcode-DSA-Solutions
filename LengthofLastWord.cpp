class Solution {public:
   int lengthOfLastWord(string s) {
       int count = 0;
       int n = s.length();
       for(int i = n - 1; i >= 0; i--) {
           if(s[i] != ' ') {
               count++;
           }
            else if (count > 0) {
               break;
           }
       }
       return count;
   }};