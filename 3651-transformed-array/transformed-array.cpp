class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {

        // i knew you will see the question, had added comments for the super duper coder 😎🧠✨

        vector<int>result(nums.size()); // 📦 result array
        int size=nums.size(); // 📏 size of array
        int move=0; // ➡️ movement index

        for(int i=0;i<size;i++){
            if(nums[i]==0) // 🛑 no movement if value is 0
                result[i]=nums[i];
            else{
                move=(i+nums[i])%size; // 🧮 calculate new index
                if(move<0) move+=size; // 🔄 fix negative index
                result[i]=nums[move]; // 🎯 assign value
        }
        }
        return result; // 🚀 final answer
    }
};
