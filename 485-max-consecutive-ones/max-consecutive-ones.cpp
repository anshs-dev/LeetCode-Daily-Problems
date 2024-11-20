class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int max=0;
        for(int x:nums){
            if(x==1)
                count++;
            else{
                max=std::max(max,count);
                count=0;
            }
        }
        return std::max(max,count);
    }
};