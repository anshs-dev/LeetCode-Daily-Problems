class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int>result;
        unordered_map<int,int>m;
        for(int i=0;i<A.size();i++){
        int count=0;
        m[A[i]]++;
        m[B[i]]++;
        for(auto x:m){
            if(x.second>1)
            count++;
        }
        result.push_back(count);
        }
        return result;
    }
};