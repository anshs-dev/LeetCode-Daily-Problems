class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int>left(n,0),right(n,0);
        left[0]=nums[0];
        for(int i=1;i<nums.size();i++) left[i]=nums[i]+left[i-1];
        right[n-1]=nums[n-1];
        for(int j=n-2;j>=0;j--) right[j]=nums[j]+right[j+1];
        for(int i=0;i<n;i++) if(left[i]==right[i]) return i;
        return -1;
    }
};