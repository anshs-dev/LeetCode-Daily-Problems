class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        bool first=true,second=false;
        int pahla=0,doosra=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==1) swap(first,second);
            if((i+1)%6==0) swap(first,second);
            if(first) pahla+=nums[i];
            else doosra+=nums[i];
        }
        return pahla-doosra;
    }
};