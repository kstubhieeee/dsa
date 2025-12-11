class Solution {
   public:
    vector<int> divisors(int n) {
        vector<int> numbers;
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                numbers.push_back(i);
            }
        }
        return numbers;
    }
};