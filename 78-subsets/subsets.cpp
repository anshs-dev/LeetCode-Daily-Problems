class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>v={{}};
        for (int x:nums){
        int n=v.size();
        for(int i=0;i<n;i++){
            vector<int>temp=v[i];
            temp.push_back(x);
            v.push_back(temp);
        }
        }
        return v;
    }
};