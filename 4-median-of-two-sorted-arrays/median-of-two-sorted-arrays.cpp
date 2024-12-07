class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v(nums1.begin(),nums1.end());
        for(int n:nums2)
        v.push_back(n);
        sort(v.begin(),v.end());
        int size=v.size();
        double l=0;
        if(size%2==0){
        l=(double(v[size/2]+v[(size/2)-1])/2);
        return l;
        }
        else
        return static_cast<double>(v[size/2]);
    }
};