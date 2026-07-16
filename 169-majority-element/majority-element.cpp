class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int num1=0,freq=0;
        for(int x:nums){
            if(num1!=x) freq--;
            else freq++;
            if(freq<=0){
                num1=x;
                freq=1;
            }
        }
        return num1;
    }
};