class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int>m;
        int count=0;
        for(int x:nums){
        m[x]++;
        if(m[x]==1)
        count+=x;
        else if(m[x]==2)
        count-=x;
        }
        return count;
    }
};