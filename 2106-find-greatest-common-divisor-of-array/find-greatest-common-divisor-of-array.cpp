class Solution {
private:
    int gcd(int a,int b){
        if(b==0)
        return a;
        return gcd(b,a%b);
    }
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int low=nums[0];
        int high=nums[nums.size()-1];
        return gcd(low,high);
    }
};