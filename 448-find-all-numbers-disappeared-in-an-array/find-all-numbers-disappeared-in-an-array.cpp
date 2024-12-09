class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>result;
        int max=nums.size();
        set<int>s(nums.begin(),nums.end());
        for(int i=1;i<=max;i++){
            if(!s.count(i))
            result.push_back(i);
        }
        return result;
    }
};