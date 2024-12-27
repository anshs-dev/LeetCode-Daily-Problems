class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int,int>m;
        for(int x:arr){
            m[x]++;
            if(m[x]>arr.size()/4)
            return x;
        }
        return 0;
    }
};