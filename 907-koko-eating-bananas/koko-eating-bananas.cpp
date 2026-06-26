class Solution {
public:
    bool isvalid(vector<int> &piles, int h, int speed){
        unsigned long long count=0;
        for(int x:piles){
            count+=((x+speed-1)/speed);
        }
        //cout<<speed<<" "<<count<<" "<<(speed>=h)<<endl;
        return count<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int right=*max_element(piles.begin(),piles.end()),left=1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(isvalid(piles,h,mid)) right=mid-1;
            else left=mid+1;
        }
        return left;
    }
};