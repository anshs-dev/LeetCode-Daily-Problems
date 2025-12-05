class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n=nums.size();
        vector<int>pref(n,0),suff(n,0);
        pref[0]=nums[0];
        suff[n-1]=nums[n-1];
        for(int i=1;i<nums.size();i++){
            pref[i]=nums[i]+pref[i-1];
            suff[n-i-1]=nums[n-i-1]+suff[n-i];
        }
        int count = 0;
        for(int i=0;i<n-1;i++){
            if((pref[i]-suff[i+1])%2==0) count++;
        }
        return count;
    }
};