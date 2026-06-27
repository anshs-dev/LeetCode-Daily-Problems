class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        vector<int>res;
        for( long long x:spells){
             long long low=0,high=potions.size()-1;
            while(low<=high){
                 long long mid=low+(high-low)/2;
                if(x*potions[mid]>=success) high=mid-1;
                else low=mid+1;
            }
            res.push_back(potions.size()-low);
        }
        return res;
    }
};