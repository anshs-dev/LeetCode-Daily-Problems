class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int>odd;
        vector<int>even;
        for(int i=0;i<nums.size();i++){
            if(i%2==0)
            even.push_back(nums[i]);
            else
            odd.push_back(nums[i]);
        }
        sort(even.begin(),even.end());
        sort(odd.rbegin(),odd.rend());
        vector<int>result;
        for(int i=0;i<even.size();i++){
            if(i<even.size()){
        result.push_back(even[i]);
            }
            if(i<odd.size()){
        result.push_back(odd[i]);
            }
        }
        return result;
    }
};