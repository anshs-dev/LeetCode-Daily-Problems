class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        int sum=0;
        int count=0;
        int i=1;
        set<int>s(banned.begin(),banned.end());
        while(sum<=maxSum && i<=n){
        if(!s.count(i)){
            sum+=i;
            if(sum>maxSum)
            return count;
            count++;
        }
        i++;
        }
        return count;
    }
};