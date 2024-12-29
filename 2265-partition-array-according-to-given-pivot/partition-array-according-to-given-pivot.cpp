class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>result1;
        vector<int>result;
        for(int x:nums){
        if(x<pivot){
        result1.push_back(x);
        }
        else if(x==pivot){
            result.insert(result.begin(),1,x);
        }
        else{
            result.push_back(x);
        }
        }
        vector<int>r;
        for(int x:result1)
        r.push_back(x);
        for(int x:result)
        r.push_back(x);
        return r;        
    }
};