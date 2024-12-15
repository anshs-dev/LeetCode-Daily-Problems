class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int flag=0;
        int first=0;
        for(int i=0;i<nums.size();i++){
        if(nums[i]==1 && flag==0){
            flag=1;
            first=i;
        }
        else if(nums[i]==1){
            if(i-first<=k)
            return false;
            else
            first=i;
        }
        }
        return true;
    }
};