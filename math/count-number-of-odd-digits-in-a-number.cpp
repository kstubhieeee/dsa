class Solution {
   public:
    int countOddDigit(int n) {
        int count = 0;
        if (n == 0) {
            return 0;
        }
        while (n > 0) {
            if ((n % 10) % 2 != 0) {
                count = count + 1;
            }
            n = n / 10;
        }
        return count;
    }
};