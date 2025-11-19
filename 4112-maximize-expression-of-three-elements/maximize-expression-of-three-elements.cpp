class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
        int max1=INT_MIN,max2=INT_MIN,mine=INT_MAX;
        for(int x:nums){
            if(x>max1){
                max2=max1;
                max1=x;
            }
            else if(x>max2) max2=x;
            mine=min(mine,x);
        }
        return max1+max2-mine;
    }
};