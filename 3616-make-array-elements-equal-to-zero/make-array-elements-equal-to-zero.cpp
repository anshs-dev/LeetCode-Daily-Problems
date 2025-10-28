class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        vector<int>pref(nums.size()+1,0),suff(nums.size()+1,0);
        pref[0]=nums[0];
        for(int i=1;i<nums.size();i++) pref[i]=nums[i]+pref[i-1];
        suff[nums.size()-1]=nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--) suff[i]=nums[i]+suff[i+1];
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                if(pref[i]==suff[i]) count+=2;
                else if(abs(pref[i]-suff[i])==1) count++;
            }
        }
        return count;
    }
};