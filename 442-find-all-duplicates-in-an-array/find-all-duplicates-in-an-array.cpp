class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<int>vip;
        int dup=nums[0];
        for(int i=1;i<nums.size();i++){
            if(dup==nums[i])
            vip.insert(dup);
            else
            dup=nums[i];
        }
        vector<int>result(vip.begin(),vip.end());
        return result;
    }
};