class Solution {
   public:
    int largestDigit(int n) {
        int greater = 0;
        int num ;
        while (n > 0) {
            num = n%10 ;
            if (num>greater){
                greater = num;
            } 
            n=n/10;
            }
            return greater;
    }
};