class Solution {
public:
    int jump(vector<int>& nums) {
        int min_steps=0;
        if(nums.size()==1) return 0;
        for(int i=0;i<nums.size();i++){
            min_steps++; 
            cout<<i<<endl;
            int reach=i+nums[i],max_reach=0,idx=0;
            if(reach>=nums.size()-1) return min_steps;
            for(int j=i+1;j<=reach && j<nums.size();j++){
                if(j+nums[j]>max_reach){
                    max_reach=nums[j]+j;
                    idx=j;
                }
            }
            i=idx-1;
            if(idx>=nums.size()) return min_steps;
        }
        return min_steps;
    }
};