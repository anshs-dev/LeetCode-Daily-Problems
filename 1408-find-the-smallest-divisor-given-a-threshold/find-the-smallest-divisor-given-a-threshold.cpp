class Solution {
public:
    bool isvalid(vector<int> &nums, int cap, int mid){
        int sum=0;
        for(int x:nums){
            sum+=((x+mid-1)/mid);
        }
        //cout<<"mid -> "<<mid<<" "<<"cap ->  "<<cap<<" "<<"sum-> "<<sum<<endl; 
        return sum<=cap;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1,high=*max_element(nums.begin(),nums.end());
        while(low<=high){
            int mid=low+(high-low)/2;
            if(isvalid(nums,threshold,mid)) high=mid-1;
            else low=mid+1;
        }
        return low;
    }
};