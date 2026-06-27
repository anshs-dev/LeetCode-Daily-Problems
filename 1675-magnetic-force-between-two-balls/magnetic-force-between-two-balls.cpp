class Solution {
public:
    bool isvalid(vector<int> &nums, int m, int dist){
        int val=nums[0]+dist,count=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>=val){
                val=nums[i]+dist;
                count++;
            }
        }
        return count>=m;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int low=0,high=*max_element(position.begin(),position.end());
        while(low<=high){
            int mid=low+(high-low)/2;
            if(isvalid(position,m,mid)) low=mid+1;
            else high=mid-1;
        }
        return low-1;
    }
};