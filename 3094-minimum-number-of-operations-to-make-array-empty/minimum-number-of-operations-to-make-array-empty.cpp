class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int k:nums)
        m[k]++;
        int count=0;
        for(auto &x:m){
            if(x.second==1)
            return -1;
            else if(x.second%3==2)
            count+=x.second/3+1;
            else if(x.second%3==1)
            count=count+x.second/3+1;
            else
            count+=x.second/3;
        }
        return count;
    }
};