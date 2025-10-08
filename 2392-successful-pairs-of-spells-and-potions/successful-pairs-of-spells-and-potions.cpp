class Solution {
public:
    void helper(int num,vector<int> &potions,vector<int>& result,long long success){
        int low=0,high=potions.size()-1;
        auto it=lower_bound(potions.begin(),potions.end(),success,[&](long long n,long long target){
            return n*num*1LL<target;
        });
        result.push_back(it!=potions.end()?potions.size()-(it-potions.begin()):0);
    }
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success){
        sort(potions.begin(),potions.end());
        vector<int>result;
        for(int x:spells) helper(x,potions,result,success);
        return result;
    }
};