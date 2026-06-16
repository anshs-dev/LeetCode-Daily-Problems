class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int left=0,tsum=0,sum=0,res=INT_MAX,window=cardPoints.size()-k;
        for(int i=0;i<cardPoints.size();i++){
            sum+=cardPoints[i];
            while(i-left+1>window){
                sum-=cardPoints[left];
                left++;
            }
            if(i-left+1==window) res=min(res,sum);
            tsum+=cardPoints[i];
        }
        return tsum-res;
    }
};