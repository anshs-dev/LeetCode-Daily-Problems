class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1)
        return x;
        int low=1;
        int high=x;
        int mid;
        int result;
        while(low<=high){
            mid=low+(high-low)/2;
            long long square=(long long)mid*mid;
            if(square==x)
            return mid;
            else if(square<x){
                low=mid+1;
                result=mid;
            }
            else
            high=mid-1;
        }
        return result;
    }
};