class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int>s1(nums1.begin(),nums1.end());
        set<int>s2(nums2.begin(),nums2.end());
        vector<vector<int>>v;
        vector<int>temp;
        for(int x:s1){
            if(!s2.count(x))
            temp.push_back(x);
        }
        v.push_back(temp);
        temp.clear();
        for(int x:s2){
            if(!s1.count(x))
            temp.push_back(x);
        }
        v.push_back(temp);
        return v;
    }
};