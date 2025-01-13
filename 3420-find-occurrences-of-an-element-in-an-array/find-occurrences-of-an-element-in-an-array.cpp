class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<int>indices;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==x)
            indices.push_back(i);
        }
        vector<int>result;
        for(int y:queries){
            if(y>indices.size())
            result.push_back(-1);
            else{
                result.push_back(indices[y-1]);
            }
        }
        return result;
    }
};