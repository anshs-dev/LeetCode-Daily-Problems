class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>m;
        for(int x:arr)
        m[x]++;
        int max_ele=INT_MIN;
        for(auto &x:m){
            if(x.first==x.second){
                max_ele=max(max_ele,x.first);
            }
        }
        return max_ele==INT_MIN?-1:max_ele;
    }
};