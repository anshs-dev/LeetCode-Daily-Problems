class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        vector<int>result;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(abs(i-j)>=indexDifference && abs(nums[i]-nums[j])>=valueDifference){
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        }
        result.push_back(-1);
        result.push_back(-1);
        return result;
    }
};