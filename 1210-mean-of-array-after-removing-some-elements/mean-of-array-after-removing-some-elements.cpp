class Solution {
public:
    double trimMean(vector<int>& arr) {
        int len=arr.size();
        int left=(len*5)/100;
        double sum=0;
        sort(arr.begin(),arr.end());
        for(int i=left;i<len-left;i++){
            sum+=arr[i];
        }
        return sum/(len-left*2);
    }
};