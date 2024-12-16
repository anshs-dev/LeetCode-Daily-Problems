class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>result;
        result=heights;
        sort(result.begin(),result.end());
        int count=0;
        for(int i=0;i<heights.size();i++){
            if(result[i]!=heights[i])
            count++;
        }
        return count;
    }
};