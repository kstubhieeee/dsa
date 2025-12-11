class Solution {
   public:
    bool isPalindrome(int n) {
        int reversedNumber = 0;
        int temp = n;
        while (n > 0) {
            reversedNumber = (reversedNumber * 10) + (n % 10);
            n = n / 10;
        }
        if(temp==reversedNumber){
            return true;
        }
        else{
            return false;
        }
    }
};