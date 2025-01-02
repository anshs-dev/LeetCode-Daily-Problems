class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        vector<int>result;
        for(int x:queries){
            int max_len=0;
                for(int i=0;i<nums.size();i++){
                    x-=nums[i];
                    if(x<0)
                    break;
                    max_len++;
                }
            result.push_back(max_len);
        }
        return result;
    }
};