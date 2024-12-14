class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),[](const vector<int>&a,const vector<int>&b){
            return a[0]<b[0];
        });
        vector<vector<int>>result;
        vector<int>prev=intervals[0];
        for(int i=1;i<intervals.size();i++){
            vector<int>current=intervals[i];
            if(current[0]<=prev[1]){
                if(prev[1]<current[1])
                prev[1]=current[1];
            }
            else{
                result.push_back(prev);
                prev=current;
            }
        }
        result.push_back(prev);
        return result;
    }
};