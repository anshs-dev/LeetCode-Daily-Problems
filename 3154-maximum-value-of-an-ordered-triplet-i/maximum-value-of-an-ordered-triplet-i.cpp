class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long max_temp=0;
        for(int i=0;i<nums.size()-2;i++){
            for(int j=i+1;j<nums.size()-1;j++){
                for(int k=j+1;k<nums.size();k++){
                   long long temp=(long long)(nums[i]-nums[j])*nums[k];
                   if(temp>max_temp) max_temp=temp;
                }
            }
        }
        return max_temp;
    }
};