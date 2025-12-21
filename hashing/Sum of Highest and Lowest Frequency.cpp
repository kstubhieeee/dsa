class Solution {
   public:
    int sumHighestAndLowestFrequency(vector<int>& nums) {
        int highest = highestFrequency(nums);
        int lowest = lowestFrequency(nums);
        int total = highest + lowest;
        return total;
    }

    int highestFrequency(vector<int>& nums) {
        map<int, int> freqCount;
        for (auto it : nums) {
            freqCount[it]++;
        }
        int maxElem = -1;
        int maxFreq = -1;
        for (auto it : freqCount) {
            if (it.second > maxFreq) {
                maxFreq = it.second;
                maxElem = it.first;
            }
        }
        return maxFreq;
    }

    int lowestFrequency(vector<int>& nums) {
        map<int, int> freqCount;
        for (auto it : nums) {
            freqCount[it]++;
        }
        int minFreq = highestFrequency(nums);
        int minElem = 0;
        for(auto it : freqCount) {
           if(it.second < minFreq){
            minFreq = it.second;
           }
        }
        return minFreq;
    }
};
