class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        unordered_map<int,int>m;
        int i=0;
        for(int x:nums) m[x]=i++;
        for(auto x:operations){
            int index=m[x[0]];
            nums[index]=x[1];
            m.erase(x[0]);
            m[x[1]]=index;
        }
        return nums;
    }
};