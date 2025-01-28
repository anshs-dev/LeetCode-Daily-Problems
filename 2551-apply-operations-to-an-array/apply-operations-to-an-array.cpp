class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1] && nums[i]!=0){
                nums[i]*=2;
                nums[i+1]=0;
            }
        }
        vector<int>result;
        int j=0;
        for(int i=0;i<nums.size();i++){
        if(nums[i]==0){
            result.insert(result.end(),0);
        }
        else{
            result.insert(result.begin()+j,nums[i]);
            j++;
        }
        }
        return result;
    }
};