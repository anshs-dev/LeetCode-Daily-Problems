class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int count=0;
        for(int x:nums){
            if(x<k)
            count++;
        }
        return count;
    }
};