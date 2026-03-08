class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string temp="";
        for(int i=0;i<nums.size();i++) nums[i][i]=='0'?temp+='1':temp+='0';
        return temp;
    }
};