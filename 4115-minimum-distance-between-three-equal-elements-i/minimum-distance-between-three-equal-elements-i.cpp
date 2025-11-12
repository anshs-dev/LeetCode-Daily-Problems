class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int,vector<int>>m;
        for(int i=0;i<nums.size();i++) m[nums[i]].push_back(i);
        int ans=INT_MAX;
        for(auto x:m){
            if(x.second.size()>2){
                for(int i=2;i<x.second.size();i++){
                    ans=min(ans,abs(x.second[i]-x.second[i-1])+abs(x.second[i-1]-x.second[i-2])+abs(x.second[i]-x.second[i-2]));
                }
            }
        }
        return ans==INT_MAX?-1:ans;
    }
};