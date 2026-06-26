class Solution {
public:
    int mySqrt(int x) {
        unsigned long long left=1,right=x;
        while(left<=right){
            unsigned long long mid=left+(right-left)/2;
            if(mid*mid<=x && (mid+1)*(mid+1)>x) return mid;
            if(mid*mid>x) right=mid-1;
            else left=mid+1;
        }
        return 0;
    }
};