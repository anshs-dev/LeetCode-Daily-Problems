class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int max_count = 0;
        for (int bit = 0; bit < 24; ++bit) {
            int count = 0;
            for (int num : candidates) {
                if (num & (1 << bit)) count++;
            }
            max_count = max(max_count, count);
        }
        return max_count;
    }
};
