class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int>prefix(arr.size());
        prefix[0]=arr[0];
        for(int i=1;i<arr.size();i++){
            prefix[i]=arr[i]^prefix[i-1];
        }
        vector<int>result;
        for(auto x:queries){
            int a=x[0];
            int b=x[1];
            if(a==0)
            result.push_back(prefix[b]);
            else
            result.push_back(prefix[b]^prefix[a-1]);
        }
        return result;
    }
};