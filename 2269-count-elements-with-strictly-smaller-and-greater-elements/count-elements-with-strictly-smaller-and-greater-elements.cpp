class Solution {
public:
    int countElements(vector<int>& nums) {
        int count=0;
        for(int x:nums){
            int flag1=0,flag2=0;
            for(int y:nums){
                if(x>y)
                flag1=1;
                if(x<y)
                flag2=1;
                if(flag1==1 && flag2==1){
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};