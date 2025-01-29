class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        map<int,int>m;
        for(auto x:nums1){
            if(m.count(x[0])){
                m[x[0]]+=x[1];
            }
            else{
                m[x[0]]=x[1];
            }
        }
        for(auto x:nums2){
            if(m.count(x[0])){
                m[x[0]]+=x[1];
            }
            else
            m[x[0]]=x[1];
        }
        vector<vector<int>>result;
        for(auto x:m){
            result.push_back({x.first,x.second});
        }
        return result;
    }
};