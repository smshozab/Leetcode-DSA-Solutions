class Solution {
public:
    int reverse(int x) {
        int rev=0;
        while (x!=0){
            int temp = x%10;
            if (rev<INT_MIN/10 || rev>INT_MAX/10){
            return 0;
        
            rev = (rev*10) + temp;
            x=x/10;
        }
        return rev;
    }
    }
};