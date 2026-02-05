class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        vector<int>result(nums.size());
        int size=nums.size();
        int move=0;
        for(int i=0;i<size;i++){
            if(nums[i]==0)
                result[i]=nums[i];
            else{
                move=(i+nums[i])%size;
                if(move<0) move+=size;
                result[i]=nums[move];
        }
        }
        return result;
    }
};