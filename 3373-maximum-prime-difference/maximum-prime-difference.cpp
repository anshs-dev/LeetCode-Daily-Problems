class Solution {
    private:
        bool isprime(int x){
            if(x==1 || x==0)
            return false;
            for(int l=2;l<=sqrt(x);l++){
                if(x%l==0)
                return false;
            }
            return true;
        }
public:
    int maximumPrimeDifference(vector<int>& nums) {
        int first=0;
        int flag1=0,flag2=0;
        int last=nums.size()-1;
        while(first<=last){
        if(isprime(nums[first]) && flag1==0){
        flag1=1;
        }
        else if(isprime(nums[last]) && flag2==0){
        flag2=1;
        }
        else if(flag1==1 && flag2==1){
            return last-first;
        }
        else if(flag1==1 && flag2==0){
            last--;
        }
        else if(flag1==0 && flag2==1)
        first++;
        else{
            first++;
            last--;
        }
        }
        return 0;
        }

};