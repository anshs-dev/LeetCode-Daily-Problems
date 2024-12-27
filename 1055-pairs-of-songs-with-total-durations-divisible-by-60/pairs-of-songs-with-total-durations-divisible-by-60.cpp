class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int count=0;
        unordered_map<int,int>m;
        for(int x:time){
            int remainder=x%60;
            int complement=(60-remainder)%60;
                count+=m[complement];
            m[remainder]++;
        }
        return count;
    }
};