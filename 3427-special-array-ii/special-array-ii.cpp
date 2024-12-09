class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        int length=nums.size();
        vector<int>special(length);
        special[0]=0;
        vector<bool>result;
        for(int i=1;i<length;i++){
            if(nums[i]%2!=nums[i-1]%2)
            special[i]=special[i-1];
            else
            special[i]=i;
        }
        for(auto &x:queries){
            int start=x[0],end=x[1];
            result.push_back(special[end]<=start);
        }
        return result;
    }
};