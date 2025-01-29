class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
       unordered_map<int,int>m;
       vector<int>result;
       for(int x:nums) m[x]++;
       unordered_set<int>s1;
       for(int x:nums){
        s1.insert(x);
        m[x]--;
        if(m[x]==0) m.erase(x);
        result.push_back(s1.size()-m.size());
       }
       return result;
    }
};