class Solution {
public:
    int minProcessingTime(vector<int>& p, vector<int>& t) {
        sort(p.begin(),p.end());
        sort(t.begin(),t.end());
        int last=t.size()-1;
        int min_time=0;
        for(int x:p){
            min_time=max({min_time,x+t[last],x+t[last-1],x+t[last-2],x+t[last-3]});
            last-=4;
        }
        return min_time;
    }
};