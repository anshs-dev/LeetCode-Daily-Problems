class Solution {
public:
    int helper(vector<int> &nums, int goal){
        int left=0,sum=0,res=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            while(left<=i && sum>goal){
                sum-=nums[left];
                left++;
            }
            res+=(i-left+1);
        }
        return res;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return helper(nums,goal)-helper(nums,goal-1);
    }
};
/*
class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        long long curr=0,res=0;
        unordered_map<int,int>m;
        m[0]=1;
        for(int x:nums){
            curr+=x;
            if(m.count(curr-goal)) res+=m[curr-goal];
            m[curr]++;
        }
        return res;
    }
};
*/