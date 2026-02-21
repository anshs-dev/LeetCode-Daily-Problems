class Solution {
public:
    void backtrack(vector<int> &result, int curr, int n, int k, int count){
        if(count==n){
            result.push_back(curr);
            return;
        }
        for(int i=0;i<=9;i++){
            if(curr==0 && i==0) continue;
            if(curr==0 && (9-i>=k || i>=k)){
                curr+=i;
                cout<<curr<<endl;
                backtrack(result,curr,n,k,count+1);
                curr-=i;
            }
            if(curr>0 && abs(curr%10-i)==k){
                curr=curr*10+i;
                backtrack(result,curr,n,k,count+1);
                curr-=i;
                curr/=10;
            }
        }
    }
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int>result;
        backtrack(result,0,n,k,0);
        return result;
    }
};