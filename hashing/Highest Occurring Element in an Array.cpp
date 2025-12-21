// This is done using array , map is used in second highest occurring one
class Solution {
   public:
    int mostFrequentElement(vector<int>& nums) {
        int greatest = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > greatest) {
                greatest = nums[i];
            }
        }
        vector<int> hashh(greatest + 1, 0);
        for (int i = 0; i < nums.size(); i++) {
            hashh[nums[i]]++;
        }
        int newGreatest = 0;
        int element = 0;
        for (int i = 0; i < greatest + 1; i++) {
            if (hashh[i] > newGreatest) {
                newGreatest = hashh[i];
                element = i;
            }
        }
        return element;
    }
};