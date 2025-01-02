class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        auto it=find(nums.begin(),nums.end(),original);
        while(it!=nums.end()){
            original=original*2;
            it=find(nums.begin(),nums.end(),original);
        }
        return original;
    }
};