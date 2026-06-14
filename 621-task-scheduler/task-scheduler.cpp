class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char,int>m;
        for(char x:tasks) m[x]++;
        int max_freq=-1,times=0;
        for(auto x:m) max_freq=max(max_freq,x.second);
        for(auto x:m) if(x.second==max_freq) times++;
        return max((int)tasks.size(),(n+1)*(max_freq-1)+times);
    }
};