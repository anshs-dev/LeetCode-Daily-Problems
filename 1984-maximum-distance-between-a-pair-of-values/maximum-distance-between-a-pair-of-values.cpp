class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(),n2=nums2.size(),l=0,r=0,res=INT_MIN;
        while(l<n && r<n2){
            if(l>r) r=l;
            if(nums2[r]>=nums1[l]){
                res=max(res,r-l);
                r++;
            }
            else l++;
            //cout<<l<<" "<<r;
        }
        return res==INT_MIN?0:res;
    }
};