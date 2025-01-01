class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>result;
        vector<int>temp;
        for(int x:nums){
            int t=x;
            while(t!=0){
                temp.push_back(t%10);
                t/=10;
            }
            reverse(temp.begin(),temp.end());
            for(int x:temp)
            result.push_back(x);
            temp.clear();
        }
        return result;
    }
};