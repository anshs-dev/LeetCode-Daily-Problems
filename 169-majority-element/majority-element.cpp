class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //Boyes-Moore
        int num=-1,freq=0;
        for(int x:nums){
            if(freq==0) num=x;
            if(num==x) freq++;
            else freq--;
        }
        return num;
    }
};