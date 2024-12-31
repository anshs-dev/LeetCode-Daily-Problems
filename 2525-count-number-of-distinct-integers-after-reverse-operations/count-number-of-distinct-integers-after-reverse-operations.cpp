class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        vector<int>result=nums;
        unordered_map<int,int>m;
        for(int x:nums){
            string a=to_string(x);
            reverse(a.begin(),a.end());
            result.push_back(stoi(a));
        }
        unordered_set<int>s;
        for(int x:result)
        s.insert(x);
        return s.size();
    }
};