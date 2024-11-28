class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      int compare=m-1;
      int compare2=n-1;
      int last=nums1.size()-1;
      while(compare>=0 && compare2>=0){
       if(nums1[compare]>=nums2[compare2]){
        nums1[last]=nums1[compare];
        compare--;
        last--;
       }
       else{
        nums1[last]=nums2[compare2];
        compare2--;
        last--;
       }
      }
      while(compare2>=0){
        nums1[last]=nums2[compare2];
        last--;
        compare2--;
      }
    }
};