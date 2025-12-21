class Solution {
   public:
    int secondMostFrequentElement(vector<int>& nums) {
        map<int, int> freqCount;
        for (auto it : nums) {
            freqCount[it]++;
        }

        int maxFreq = 0;
        int maxElem = -1;
        int secondMaxFreq = 0;
        int secondMaxElem = -1;
        for (auto it : freqCount) {
            if(it.second > maxFreq){
                secondMaxFreq = maxFreq;
                secondMaxElem = maxElem;
                maxElem = it.first;
                maxFreq = it.second;
            }
            else if(maxFreq > it.second && it.second > secondMaxFreq){
                secondMaxElem = it.first;
                secondMaxFreq = it.second;
            }
        }
        return secondMaxElem;
    }
};