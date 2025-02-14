class Solution {
public:
    int maxSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=-1;
        for(int i=nums.size()-1;i>0;i--){
            for(int j=i-1;j>=0;j--){
                string x=to_string(nums[i]);
                string y=to_string(nums[j]);
                int max1=0,max2=0;
                for(char a:x){
                    max1=max(max1,a-'0');
                }
                for(char a:y){
                    max2=max(max2,a-'0');
                }
                if(max1==max2) ans=max(nums[i]+nums[j],ans);
            }
        }
        return ans;
    }
};