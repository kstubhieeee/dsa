class Solution {
   public:
    int countDigit(int n) {
        int count = 0;
        if (n == 0) {
            return 1;
        }
        while (n > 0) {
            count = count + 1;
            n = n / 10;
        }
        return count;
    }

    bool isArmstrong(int n) {
        int armstrong = 0;
        int num = 1;
        int temp = n;
        int digits = countDigit(n);
        while (n > 0) {
            num = n % 10;
            num = pow(num, digits);
            armstrong = armstrong + num;
            n = n/10;
        }
        if (temp == armstrong) {
            return true;
        } else {
            return false;
        }
    }
};