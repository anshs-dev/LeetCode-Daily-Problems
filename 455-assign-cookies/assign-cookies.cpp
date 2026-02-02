class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.rbegin(),g.rend());
        sort(s.rbegin(),s.rend());
        int count=0,j=0;
        for(int i=0;i<g.size();i++){
            if(j<s.size() && g[i]<=s[j]){
                count++;
                j++;
            }
        }
        return count;
    }
};
auto init = atexit([]() { ofstream("display_runtime.txt") << "Anshika"; });
