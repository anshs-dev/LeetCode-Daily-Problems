class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size()-1;i+=2){
        if(nums[i]==nums[i+1]){
            count++;
            i--;
        }
        }
        if(count%2==0 && nums.size()%2!=0)
        return count+1;
        else if(count%2==0 && nums.size()%2==0)
        return count;
        else if(count%2!=0 && nums.size()%2!=0)
        return count;
        else
        return count+1;
    }
};