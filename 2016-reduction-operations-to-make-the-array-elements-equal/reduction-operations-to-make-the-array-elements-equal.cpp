class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int lowest=nums[0];
        int current=nums[0];
        int i=0;
        int count=0;
        for(int x:nums){
            if(x!=lowest){
                if(x!=current){
                    current=x;
                    i++;
                    count=count+i;
                }
                else{
                    count=count+i;
                }
            }
        }
        return count;
    }
};