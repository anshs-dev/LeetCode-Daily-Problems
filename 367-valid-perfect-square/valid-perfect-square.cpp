class Solution {
public:
    bool isPerfectSquare(int num) {
        int low=1;
        if(num==1)
        return true;
        int high=num/2;
        while(low<=high){
            int mid=(high+low)/2;
            if((double)num/mid==mid)
            return true;
            else if((double)num/mid<mid)
            high=mid-1;
            else
            low=mid+1;
        }
        return false;
    }
};