class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        vector<int>result;
        int count=0;
        int j;
        for(int i=0;i<nums.size()-k+1;i++){
            count=0;
            int flag=0;
            for(j=i;j<i+k-1;j++){
                if(j>i && nums[i]!=nums[i+1]-1){
                    result.push_back(nums[i]);
                    flag=1;
                    break;
                }
             if(nums[j]!=nums[j+1]-1){
                result.push_back(-1);
                flag=1;
                break;
             }
        }
        if(flag==0)
        result.push_back(nums[i+k-1]);
        }
        return result;
    }
};