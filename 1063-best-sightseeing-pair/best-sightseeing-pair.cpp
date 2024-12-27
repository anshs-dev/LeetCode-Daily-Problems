class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
       int max_i=values[0],max_score=INT_MIN;
       for(int i=1;i<values.size();i++){
        max_score=max(max_score,max_i+values[i]-i);
        max_i=max(max_i,values[i]+i);
       }
       return max_score;
    }
};