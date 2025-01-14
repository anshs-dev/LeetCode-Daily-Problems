class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int>result;
        unordered_map<int,int>m;
        int count=0;
        for(int i=0;i<A.size();i++){
        if(m[A[i]]==1)
        count++;
        if(m[B[i]]==1)
        count++;
        if(A[i]==B[i] && !m.count(m[A[i]]) && !m.count(m[B[i]])){
            count++;
        }
        m[A[i]]++;
        m[B[i]]++;
        result.push_back(count);
        }
        return result;
    }
};