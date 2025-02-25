class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        const int mod=1e9+7;
        int even_count=1,odd_count=0,prefix_sum=0,result=0;
        for(int x:arr){
            prefix_sum+=x;
            if(prefix_sum%2==0){
                result=(result+odd_count)%mod;
                even_count++;
            }
            else{
                result=(result+even_count)%mod;
                odd_count++;
            }
        }
        return result;
    }
};