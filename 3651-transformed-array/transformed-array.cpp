class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {

        // i knew you will see the question, had added comments for the super duper coder 😎🧠✨

        vector<int> result(nums.size());          // 📦 result array
        int size = nums.size();                   // 📏 size of array
        int move = 0;                             // ➡️ index movement holder

        for(int i = 0; i < size; i++){

            // 🛑 if value is 0, no movement needed
            if(nums[i] == 0)
                result[i] = nums[i];

            else{
                // 🧮 calculate new index with wrap-around
                move = (i + nums[i]) % size;

                // 🔄 handle negative index properly
                if(move < 0) 
                    move += size;

                // 🎯 pick value from the calculated index
                result[i] = nums[move];
            }
        }

        // 🚀 return the transformed array
        return result;
    }
};
