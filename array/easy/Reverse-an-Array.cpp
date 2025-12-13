class Solution {
   public:
    void reverse(int arr[], int n) {
        int arr1[n];
        for (int i = 0; i < n; i++) {
            arr1[i] = arr[i];
        }
        for (int i = 0; i < n; i++) {
            arr[n - 1 - i] = arr1[i];
        }
    }
};
