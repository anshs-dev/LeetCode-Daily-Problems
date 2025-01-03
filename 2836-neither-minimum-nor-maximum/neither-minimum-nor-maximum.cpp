class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        set<int>s(nums.begin(),nums.end());
        if(s.size()<=2)
        return -1;
        int flag=0;
        for(int x:s){
            if(flag==1)
            return x;
            flag=1;
        }
     return -1;
    }
};