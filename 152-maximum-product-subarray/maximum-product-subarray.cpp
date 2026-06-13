class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max_res=nums[0],pref=1,suff=1,n=nums.size();
        for(int i=0;i<n;i++){
            if(pref==0) pref=1;
            if(suff==0) suff=1;
            pref*=nums[i];
            suff*=nums[n-i-1];
            max_res=max({max_res,pref,suff});
        }
        return max_res;
    }
};