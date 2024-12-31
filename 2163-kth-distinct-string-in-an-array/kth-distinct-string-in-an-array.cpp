class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>m;
        vector<string>result;
        for(string x:arr){
            m[x]++;
        }
        for(string x:arr){
            if(m[x]==1)
            result.push_back(x);
        }
        return result.size()<k?"":result[k-1];
    }
};