class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int size=nums.size();
        vector<int>leftsum(size,0);
        vector<int>rightsum(size,0);
        leftsum[0]=0;
        rightsum[size-1]=0;
        for(int i=1;i<nums.size();i++){
            leftsum[i]=leftsum[i-1]+nums[i-1];
        }
        for(int i=size-2;i>=0;i--){
            rightsum[i]=rightsum[i+1]+nums[i+1];
        }
        vector<int>result;
        for(int i=0;i<size;i++){
            int sum=abs(leftsum[i]-rightsum[i]);
            result.push_back(sum);
        }
        return result;
    }
};