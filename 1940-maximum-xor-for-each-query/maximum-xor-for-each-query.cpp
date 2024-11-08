#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int maxNum = (1 << maximumBit) - 1;
        int prefixXOR = 0;
        for (int num : nums) prefixXOR ^= num;
        
        vector<int> result(nums.size());
        for (int i = 0; i < nums.size(); i++) {
            result[i] = prefixXOR ^ maxNum;
            prefixXOR ^= nums[nums.size() - 1 - i];
        }
        return result;
    }
};
