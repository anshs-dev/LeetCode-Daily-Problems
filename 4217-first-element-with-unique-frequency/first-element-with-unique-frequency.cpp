class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int,int>m1,m2;
        for(int x:nums){
            if(m2[m1[x]]>0) m2[m1[x]]--;
            m1[x]++;
            m2[m1[x]]++;
        }
        for(auto x:nums){
            if(m2[m1[x]]==1) return x;
        }
        return -1;
    }
};