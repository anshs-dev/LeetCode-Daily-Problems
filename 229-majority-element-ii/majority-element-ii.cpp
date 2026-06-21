class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int num1=-1,num2=-1,c1=0,c2=0;
        for(int x:nums){
            if(x==num1) c1++;
            else if(x==num2) c2++;
            else if(c2==0){ 
                num2=x;
                c2=1;
            }
            else if(c1==0){ 
                num1=x;
                c1=1;
            }
            else{
                c1--;
                c2--;
            }
        }
        int f1=0,f2=0;
        for(int x:nums) if(x==num1) f1++;
        else if(x==num2) f2++;
        cout<<f1<<" "<<f2;
        if(f2>nums.size()/3 && f1>nums.size()/3) return {num1,num2};
        if(f1>nums.size()/3) return {num1};
        if(f2>nums.size()/3) return {num2};
        return {};
    }
};