class Solution {public:
   bool isSameAfterReversals(int num) {
       int rev1=0, rev2=0, original_num=num;
       while (num!=0){
           int temp = num%10;
           rev1 = (rev1*10) + temp;
           num=num/10;
       }
       while (rev1!=0){
           int temp = rev1%10;
           rev2 = (rev2*10) + temp;
           rev1=rev1/10;
       }
   if (rev2==original_num){
       return (true);
   }
   else{
       return (false);
   }
   }};