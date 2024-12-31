class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>m;
        for(int x:nums2)
        m[x]++;
        int count=0;
        for(int x:nums1){
            if(m[x]>0)
            count++;
        }
        vector<int>result;
        result.push_back(count);
        m.clear();
        for(int x:nums1)
        m[x]++;
        count=0;
        for(int x:nums2){
            if(m[x]>0)
            count++;
        }
        result.push_back(count);
        return result;
    }
};