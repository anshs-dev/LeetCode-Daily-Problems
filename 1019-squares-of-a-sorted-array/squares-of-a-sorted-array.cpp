class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int first=0;
        int last=nums.size()-1;
        vector<int>result(last+1);
        int pos=last;
        while(first<=last){
            if(abs(nums[first])>abs(nums[last])){
            result[pos--]=nums[first]*nums[first];
            first++;
            }
            else{
                result[pos--]=nums[last]*nums[last];
                last--;
            }
        }
        return result;
    }
};