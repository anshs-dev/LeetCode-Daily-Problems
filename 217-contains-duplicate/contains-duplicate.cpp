class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>win;
        for(int i:nums){
            win[i]++;
            if(win[i]>1)
            return true;
        }
        return false;
    }
};