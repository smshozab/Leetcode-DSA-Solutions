class Solution {public:
   int search(vector<int>& nums, int target) {
       int min=0;
       int max=size(nums)-1;
       while (min<=max){
           int mid=(min+max)/2;
       if (target==nums[mid]){
           return mid;
       }
       else if(target<nums[mid]){
           max=mid-1;
       }
       else if(target>nums[mid]){
           min=mid+1;
       }
       }
           return -1;
   }};