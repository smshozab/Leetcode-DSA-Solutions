class Solution {public:
   int singleNumber(vector<int>& nums) {
       int key=nums[0];
       for(int i=1;i<nums.size();i++){
           key=key^nums[i];
       }
       return key;
   }};