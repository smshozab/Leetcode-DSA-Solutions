class Solution {public:
   vector<int> findDuplicates(vector<int>& nums) {
       vector<int> freq(nums.size() + 1, 0);
       vector<int> duplicates;
       for(int i=0;i<nums.size();i++) {
           freq[nums[i]]++;
       }
       for(int i=1;i<freq.size();i++) {
           if(freq[i]==2) {
               duplicates.push_back(i);
           }
       }
       return duplicates;
   }};