class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int count=0;
        int k=arr.size();
        if(k%2==0)
        k-=1;
        while(k>=1){
            for(int i=0;i<=arr.size()-k;i++){
                int sum=0;
                for(int j=i;j<i+k;j++){
                sum+=arr[j];
               }
               count+=sum;
            }
            k-=2;
        }
        return count;
    }
};