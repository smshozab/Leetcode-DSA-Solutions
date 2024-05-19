class Solution {public:
   int searchInsert(vector<int>& nums, int target) {
       int left=0, right=nums.size(), mid=0;
       while(left<right){
           mid=left+(right-left)/2;
           if(nums[mid]>=target)
               right=mid;
           else
               left=mid+1;
       }
           return left;
   }};