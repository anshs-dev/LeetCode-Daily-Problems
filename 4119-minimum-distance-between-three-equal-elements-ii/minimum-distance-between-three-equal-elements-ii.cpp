class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int,pair<int,int>>m;
        int res=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(m.find(nums[i])==m.end()){
                m[nums[i]].second=i;
                m[nums[i]].first=-1;
            }
            else if(m[nums[i]].first==-1){
                m[nums[i]].first=m[nums[i]].second;
                m[nums[i]].second=i;
            }
            else{
                res=min(res,2*(i-m[nums[i]].first));
                m[nums[i]].first=m[nums[i]].second;
                m[nums[i]].second=i;
            }
        }
        return res==INT_MAX?-1:res;
    }
};