class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int num1=-1,freq1=0,num2=-1,freq2=0;
        for(int x:nums){
            if(x==num1) freq1++;
            else if(x==num2) freq2++;
            else if(freq1==0){
                num1=x;
                freq1=1;
            }
            else if(freq2==0){
                num2=x;
                freq2=1;
            }
            else{
                freq1--;
                freq2--;
            }
        }
        int count1=0,count2=0;
        for(int x:nums) if(x==num1) count1++;
        else if(x==num2) count2++;
        if(count2>nums.size()/3 && num1!=num2 && count1>nums.size()/3) return {num1,num2};
        if(count1>nums.size()/3) return {num1};
        if(count2>nums.size()/3) return {num2};
        return {};
    }
};