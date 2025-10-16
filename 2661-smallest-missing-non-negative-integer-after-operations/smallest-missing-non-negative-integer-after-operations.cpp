class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        unordered_map<int,int>m;
        for(int x:nums) m[(x%value+value)%value]++;
        int first=0;
        while(true) if(m[first%value]>0){
            m[first%value]--;
            first++;
        }
        else return first;
        return -1;
    }
};