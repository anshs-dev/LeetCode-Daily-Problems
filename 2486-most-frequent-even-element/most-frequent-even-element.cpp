class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int x:nums){
            if(x%2==0)
            m[x]++;
        }
        int min_element=INT_MAX;
        int max_freq=INT_MIN;
        for(auto &x:m){
            if(x.second>=max_freq){
                if(x.second==max_freq)
                min_element=min(min_element,x.first);
                else{
                max_freq=x.second;
                min_element=x.first;
                }
            }
        }
        return min_element==INT_MAX?-1:min_element;
    }
};