class Solution {public:
   vector<int> twoSum(vector<int>& nums, int target) {
       vector<int> result;
       bool found = false;
       int i,j;
       for (i = 0; i < nums.size(); i++) {
       for (j = i + 1; j < nums.size(); j++) {
           if (target == nums[i] + nums[j]) {
               found = true;
               break;
            }
       }
       if (found){
           break;
           }
   }
   if (found) {
           result.push_back(i);
           result.push_back(j);
       }
               return result;
   }};