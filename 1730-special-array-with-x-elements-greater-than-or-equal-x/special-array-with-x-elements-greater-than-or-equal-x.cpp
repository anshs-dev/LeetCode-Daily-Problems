class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=1;i<=nums.size();i++){
            int count=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]>=i)
                count++;
            }
            if(count==i)
            return i;
        }
        return -1;
    }
};