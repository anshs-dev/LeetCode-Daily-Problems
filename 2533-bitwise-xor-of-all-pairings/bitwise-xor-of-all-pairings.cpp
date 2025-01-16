class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()%2==0 && nums2.size()%2==0) return 0;
        int e1=0,e2=0;
        if(nums1.size()%2!=0){
            for(int x:nums2)
            e2^=x;
        }
        if(nums2.size()%2!=0){
            for(int x:nums1)
            e1^=x;
        }
        return e1^e2;
    }
};