class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        int min = INT_MAX, max = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            min = std::min(min, nums[i]);
            max = std::max(max, nums[i]);
        }
        int max_total = std::min(100000, max + k), min_total = std::max(0, min - k);
        int range = max_total - min_total + 1;
        std::vector<int> freq(range, 0);
        for (int i = 0; i < nums.size(); i++) {
            int left = std::max(min_total, nums[i] - k);
            int right = std::min(max_total, nums[i] + k);
            freq[left - min_total]++;
            if (right + 1 <= max_total) freq[right + 1 - min_total]--;
        }
        int current_beauty = 0, max_beauty = 0;
        for (int i = 0; i < range; i++) {
            current_beauty += freq[i];
            max_beauty = std::max(max_beauty, current_beauty);
            if (max_beauty == nums.size()) return max_beauty;
        }
        return max_beauty;
    }
};
