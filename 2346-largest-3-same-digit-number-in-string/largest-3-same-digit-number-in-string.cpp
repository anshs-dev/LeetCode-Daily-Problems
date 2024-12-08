class Solution {
public:
    string largestGoodInteger(string nums) {
        priority_queue<string>maxHeap;
        string x;
        for(int i=0;i<nums.length()-2;i++){
        if(nums[i]==nums[i+1] && nums[i]==nums[i+2]){
            x=string(3,nums[i]);
            maxHeap.push(x);
        }

        }
        if(maxHeap.empty())
        return x="";
        else
        return maxHeap.top();
    }
};