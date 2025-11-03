class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int start=*min_element(nums.begin(),nums.end()),end=*max_element(nums.begin(),nums.end());
        vector<int>result;
        unordered_set<int>st(nums.begin(),nums.end());
        for(int i=start;i<=end;i++) if(st.find(i)==st.end()) result.push_back(i);
        return result;
    }
};