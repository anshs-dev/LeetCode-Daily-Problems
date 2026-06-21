class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int num=-1,count=0;
        for(int x:nums){
            if(count==0) num=x;
            if(x==num) count++;
            else count--;
        }
        return num;
    }
};