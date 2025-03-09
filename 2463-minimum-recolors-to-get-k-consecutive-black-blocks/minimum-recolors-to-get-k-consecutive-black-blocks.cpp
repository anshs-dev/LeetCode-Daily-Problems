class Solution {
public:
    int minimumRecolors(string nums, int k) {
       int count=0,max_black=INT_MAX;
       for(int i=0;i<k;i++){
        if(nums[i]=='W') count++;
       }
       max_black=min(max_black,count);
       for(int i=k;i<nums.length();i++){
        if(nums[i-k]=='W')
        count--;
        if(nums[i]=='W') count++;
        max_black=min(max_black,count);
       }
       return max_black;
    }
};