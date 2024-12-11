class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<int>temp;
        vector<vector<int>>v;
        if(m*n!=original.size())
        return v;
        for(int i=0;i<original.size();){
        int hello=n;
        while(hello--){
            temp.push_back(original[i]);
            i++;
        }
        v.push_back(temp);
        temp.clear();
        }
        return v;
    }
};