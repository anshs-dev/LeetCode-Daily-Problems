class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(i==j)
                continue;
                string s1=nums[i];
                string s2=nums[j];
                if(s1+s2==target)
                count++;
            }
        }
        return count;
    }
};