class Solution {
   public:
    int GCD(int n1, int n2) {
        int smallest = 0;
        int gcd = 0;
        if (n1 > n2) {
            smallest = n2;
        } else {
            smallest = n1;
        }
        for (int i = 1; i <= smallest; i++) {
            if (n1 % i == 0 && n2 % i == 0) {
                if (i > gcd) {
                    gcd = i;
                }
            }
        }
        return gcd;
    }
};