class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int>st(nums.begin(),nums.end());
        int temp=1;
        while(st.count(k*temp)) temp++;
        return k*temp;
    }
};