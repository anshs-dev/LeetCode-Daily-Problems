class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int smallest=0,largest=0,left=-1,right=-1;
        for(int i=1;i<nums.size();i++){
        if(nums[i]<nums[i-1]){
            left=i-1;
            break;
        }
        }
        for(int j=nums.size()-2;j>=0;j--){
            if(nums[j]>nums[j+1]){
                right=j+1;
                break;
            }
        }
        if(left==-1) return 0;
        if(nums.size()==1)return 0;
        smallest=INT_MAX;
        largest=INT_MIN;
        for(int i=left;i<=right;i++){
        smallest=min(smallest,nums[i]);
        largest=max(largest,nums[i]);
        } 
        while(left>=0 && nums[left]>smallest){
            left--;
        }
        while(right<nums.size() && nums[right]<largest){
            right++;
        }
        return right-left-1;
    }
};