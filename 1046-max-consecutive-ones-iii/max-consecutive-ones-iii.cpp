class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0,res=0,temp=k,curr=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1) curr++;
            while(left<=i && nums[i]==0 && temp==0){
                curr--;
                if(nums[left]==0 && temp<k) temp++;
                left++;
            }
            if(nums[i]==0 && temp>0){
                curr++;
                temp--;
            }
            res=max(res,i-left+1);
            cout<<res;
        }
        return res;
    }
};