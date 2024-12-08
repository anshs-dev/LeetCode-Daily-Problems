class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int>m;
        vector<int>result;
        int count=0;
        for(int i=0;i<nums.size();i++){
        if(m[nums[i]]>1)
        continue;
        m[nums[i]]++;
        count++;
        result.push_back(nums[i]);
        }
        int dif=nums.size()-result.size();
        while(dif--)
        result.push_back(0);
        nums=result;
        return count;
    }
};