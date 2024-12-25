class Solution {
public:
    bool kyawokhasaktahai(vector<int>&piles,int speed,int h){
            int sum=0;
            for(int x:piles){
                if(x%speed==0)
                sum=sum+(x/speed);
                else{
                    sum=sum+(x/speed)+1;
                }
            }
            return sum<=h;
    }    
    int minEatingSpeed(vector<int>& piles, int h) {
     int low=1,high=*max_element(piles.begin(),piles.end());
     while(low<high){
        int mid=low+(high-low)/2;
        if(kyawokhasaktahai(piles,mid,h))
        high=mid;
        else
        low=mid+1;
     }   
     return low;
    }
};