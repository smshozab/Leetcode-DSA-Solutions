class Solution {public:
   int countSeniors(vector<string>& details) {
       int count=0;
       for(int i=0;i<details.size();i++){
           int tens=details[i][11]-'0', ones=details[i][12]-'0';
           int num=tens*10+ones;
           if(num>60){
               count++;
           }
       }
       return count;
           }};