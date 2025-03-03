class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>left;
        vector<int>right;
        int count=0;
        for(int x:nums){
            if(x<pivot) left.push_back(x);
            else if(x==pivot) count++;
            else
            right.push_back(x);
        }
        vector<int>result;
        for(int x:left) result.push_back(x);
        result.insert(result.end(),count,pivot);
        for(int x:right) result.push_back(x);
        return result;
    }
};