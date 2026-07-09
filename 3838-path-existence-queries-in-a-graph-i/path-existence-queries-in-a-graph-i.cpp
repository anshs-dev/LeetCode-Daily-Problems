class Solution {
public:
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {
        vector<int> comp(n,-1);
        int first=0;
        comp[0]=0;
        for(int i=1;i<n;i++){
            if(abs(nums[i-1]-nums[i])<=maxDiff) comp[i]=first;
            else{
                first++;
                comp[i]=first;
            }
        }
        vector<bool>ans;
        for(auto x:queries) ans.push_back(comp[x[0]]==comp[x[1]]?true:false);
        return ans;
    }
};