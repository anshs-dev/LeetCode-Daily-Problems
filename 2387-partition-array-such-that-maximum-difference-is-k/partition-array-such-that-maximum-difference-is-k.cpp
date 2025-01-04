class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        int count=1,min_element=0;
        sort(nums.begin(),nums.end());
        min_element=nums[0];
        for(int i=1;i<nums.size();i++){
        if(nums[i]-min_element>k){
            min_element=nums[i];
            count++;
        }
        }
        return count;
    }
};