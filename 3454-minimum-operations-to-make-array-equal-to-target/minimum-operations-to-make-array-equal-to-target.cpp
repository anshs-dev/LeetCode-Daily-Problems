class Solution {
public:
    long long minimumOperations(vector<int>& nums, vector<int>& target) {
        for(int i=0;i<nums.size();i++) nums[i]=target[i]-nums[i];
        long long result=0,temp=0;
        for(int x:nums){
            if(x<0 && temp<0 && x<temp) result+=abs(x)-abs(temp);
            else if(x<0 && temp>=0) result+=abs(x);
            else if(x>0 && temp<0) result+=x;
            else if(x>temp && x>0) result+=x-temp;
            temp=x;
            //1,2,-1,-2,1,-1,0,0,-1
        }
        return result;
    }
};