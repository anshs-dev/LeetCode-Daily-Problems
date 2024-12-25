class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int x:nums) 
        m[x]++;
        vector<int>result;
        for(auto &x:m){
            if(x.second==2)
            result.push_back(x.first);
        }
        if(result.size()==1)
        return result[0];
        if(result.empty())
        return 0;
        int first=result[0];
        for(int i=1;i<result.size();i++){
            first=first^result[i];
        }
        return first;
    }
};