class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        bool permutation=next_permutation(nums.begin(),nums.end());
        if(!permutation){
            sort(nums.begin(),nums.end());
        }
    }
};