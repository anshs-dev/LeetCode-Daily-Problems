class Solution {
public:
    int findMinDifference(vector<string>& time) {
        sort(time.begin(),time.end());
        vector<int>diff;
        for(string x:time){
            int a=stoi(x.substr(0,2));
            int b=stoi(x.substr(3,2));
            diff.push_back(a*60+b);
        }
        int min_diff=INT_MAX;
        diff.push_back(diff[0]+1440);
        for(int i=1;i<diff.size();i++)
        min_diff=min(min_diff,diff[i]-diff[i-1]);
        return min_diff;
    }
};