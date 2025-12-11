class Solution {
   public:
    bool isPerfect(int n) {
        int num = 0;
        for (int i = 1; i < n; i++) {
            if (n % i == 0) {
                num = num + i;
            }
        }
        if (num == n) {
            return true;
           }
        return false;
    }
};