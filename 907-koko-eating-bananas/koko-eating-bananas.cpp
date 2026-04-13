class Solution {
public:
    bool valid(vector<int> &piles, int mid,int h){
        int time=0;
        for(int x:piles) time+=((x+mid-1)/mid);
        return time<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        int low=1,high=piles.back();
        while(low<high){
            int mid=low+(high-low)/2;
            if(valid(piles,mid,h)) high=mid;
            else low=mid+1;
        }
        return high;
    }
};