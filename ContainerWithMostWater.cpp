class Solution {public:
   int maxArea(vector<int>& height) {
       int n = height.size(), maxWater = 0, left = 0, right = n - 1;
   while (left < right) {
       int h = min(height[left], height[right]);
       int w = right - left;
       int area = h * w;
       maxWater = max(maxWater, area);
       if (height[left] < height[right]) {
           left++;
       } else {
           right--;
       }
   }
   return maxWater;
   }};