class Solution {
   public:
    int reverseNumber(int n) {
        int reversedNumber = 0;
        while (n > 0) {
            reversedNumber = (reversedNumber * 10) + (n % 10);
            n = n / 10;
        }
        return reversedNumber;
    }
};