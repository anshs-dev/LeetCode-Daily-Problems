class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        int index=0,sum=INT_MAX,count=0;
        while(!is_sorted(nums.begin(),nums.end())){
            for(int i=0;i<nums.size()-1;i++){
                int curr=nums[i]+nums[i+1];
                if(curr<sum){
                    index=i;
                    sum=curr;
                }
            }
            nums.insert(nums.begin()+index,nums[index]+nums[index+1]);
            nums.erase(nums.begin()+index+1);
            nums.erase(nums.begin()+index+1);
            sum=INT_MAX;
            count++;
        }
        return count;
    }
};