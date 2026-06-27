class Solution {
public:
    bool isvalid(vector<int> &nums, int k, int cap){
        int curr=nums[0]+cap;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>=curr){
                curr=nums[i]+cap;
                k--;
            }
        }
        return k<=1;
    }
    int maximumTastiness(vector<int>& price, int k) {
        sort(price.begin(),price.end());
        int low=0,high=price.back();
        while(low<=high){
            int mid=low+(high-low)/2;
            if(isvalid(price,k,mid)) low=mid+1;
            else high=mid-1;
        }
        return low-1;
    }
};