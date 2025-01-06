class Solution {
public:
    bool isaverage(vector<int>v){
        for(int i=1;i<v.size()-1;i++){
            if(((v[i-1]+v[i+1])/2)==v[i])
            return true;
        }
        return false;
    }
    vector<int> rearrangeArray(vector<int>& nums) {
        while(isaverage(nums)){
            for(int i=1;i<nums.size()-1;i++){
            if(((nums[i-1]+nums[i+1])/2)==nums[i])
            swap(nums[i],nums[i+1]);
            }
        }
        return nums;
    }
};