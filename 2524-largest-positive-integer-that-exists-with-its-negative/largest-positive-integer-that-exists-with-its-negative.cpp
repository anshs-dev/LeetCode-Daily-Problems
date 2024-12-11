class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_set<int>s;
        int max_element=INT_MIN;
        for(int x:nums){
            if(s.count(-x)){
                max_element=max(max_element,abs(x));
            }
            s.insert(x);
        }
        return max_element==INT_MIN?-1:max_element;
    }
};