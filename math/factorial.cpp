class Solution {
   public:
    int factorial(int n) {
        int fact = 1;
        if (n == 0 || n == 1) {
            return 1;
        }
        for (int i = 2; i <= n; i++) {
            fact = fact * i;
        }
        return fact;
    }
};
