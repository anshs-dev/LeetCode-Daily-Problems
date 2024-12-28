class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int count=0;
        for(int x:nums){
        count+=m[x-k]+m[x+k];
        m[x]++;
        }
        return count;
    }
};