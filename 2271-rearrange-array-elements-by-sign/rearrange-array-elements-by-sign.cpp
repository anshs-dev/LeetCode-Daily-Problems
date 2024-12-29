class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>num1;
        vector<int>num2;
        for(int x:nums){
            if(x<0)
            num2.push_back(x);
            else
            num1.push_back(x);
        }
        vector<int>result;
        for(int i=0;i<num1.size();i++){
            result.push_back(num1[i]);
            result.push_back(num2[i]);
        }
        return result;
    }
};