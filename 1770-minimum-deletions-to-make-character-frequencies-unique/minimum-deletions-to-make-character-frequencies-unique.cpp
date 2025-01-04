class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int>m;
        for(char x:s)
        m[x]++;
        vector<int>v;
        for(auto &x:m)
        v.push_back(x.second);
        sort(v.rbegin(),v.rend());
        m.clear();
        int count=0;
        for(int x:v){
            if(m.count(x)){
                while(m.count(x)){
                    count++;
                    x--;
                }
            }
            if(x!=0)
            m[x]++;
        }
       return count;
    }
};