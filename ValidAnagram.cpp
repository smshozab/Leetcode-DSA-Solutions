class Solution {public:
   bool isAnagram(string s, string t) {
       if (s.length() != t.length()) {
           return false;
       }
       int charCount[256] = {0};
       for (char c : s) {
           charCount[c]++;
       }
       for (char c : t) {
           if (charCount[c] == 0) {
               return false;
           }
           charCount[c]--;
       }
               for (int i = 0; i < 256; i++) {
           if (charCount[i] != 0) {
               return false;
           }
       }
               return true;
   }};