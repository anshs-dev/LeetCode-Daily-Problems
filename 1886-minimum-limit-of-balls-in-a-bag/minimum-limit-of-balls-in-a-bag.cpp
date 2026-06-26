class Solution {
public:
    bool isvalid(vector<int> &nums, int ops, int num){
        long long steps=0;
        for(auto x:nums){
            steps+=(x-1)/num;
        }
        return steps<=ops;
    }
    int minimumSize(vector<int>& nums, int maxOperations) {
        int low=1,high=*max_element(nums.begin(),nums.end());
        while(low<=high){
            int mid=low+(high-low)/2;
            if(isvalid(nums,maxOperations,mid)) high=mid-1;
            else low=mid+1;
        }
        return low;
    }
};