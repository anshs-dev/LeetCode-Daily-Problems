class Solution {
public:
    vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
        unordered_map<int,vector<int>>mp;
        int n=nums.size();

        for(int i=0;i<n;i++) mp[nums[i]].push_back(i);

        vector<int>res;

        for(int x:queries){
            auto &v=mp[nums[x]];

            if(v.size()==1){
                res.push_back(-1);
                continue;
            }

            int i=lower_bound(v.begin(),v.end(),x)-v.begin();
            int ans=INT_MAX;

            if(i>0){
                int t=v[i-1];
                int d=abs(x-t);
                ans=min(ans,min(d,n-d));
            }

            if(i+1<v.size()){
                int t=v[i+1];
                int d=abs(x-t);
                ans=min(ans,min(d,n-d));
            }

            int t=v.back();
            if(t!=x){
                int d=abs(x-t);
                ans=min(ans,min(d,n-d));
            }

            t=v[0];
            if(t!=x){
                int d=abs(x-t);
                ans=min(ans,min(d,n-d));
            }

            res.push_back(ans);
        }

        return res;
    }
};