class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        if(nums.size()==1) return 1;
        string result="";
        long long res=0;
        int left=0,right=nums.size()-1;
        while(left<right){
            result+=to_string(nums[left]);
            result+=to_string(nums[right]);
            left++;
            right--;
            res+=std::stoll(result);
            result.clear();
            if(left==right){
                result+=to_string(nums[left]);
                res+=std::stoll(result);
            }
        }
        return res;
    }    
};