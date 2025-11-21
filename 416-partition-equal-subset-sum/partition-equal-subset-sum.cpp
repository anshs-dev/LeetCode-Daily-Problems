class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int m=nums.size();
        int sum=accumulate(nums.begin(),nums.end(),0);
        if(sum%2!=0) return false;
        int n=sum/2;
        vector<vector<bool>>v(m+1,vector<bool>(n+1,false));
        for(int i=0;i<m;i++) v[i][0]=true;
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(nums[i-1]>j) v[i][j]=v[i-1][j];
                else v[i][j]=v[i-1][j] || v[i-1][j-nums[i-1]];
            }
        }
        return v[m][n];
    }
};