class Solution {
public:
    int pivotInteger(int n) {
        vector<int>prefix1(n,0);
        vector<int>prefix2(n,0);
        prefix1[0]=1;
        for(int i=2;i<=n;i++){
            prefix1[i-1]=i+prefix1[i-2];
        }
        prefix2[n-1]=n;
        for(int i=n-2;i>=0;i--){
        prefix2[i]=i+1+prefix2[i+1];
        }
        for(int i=0;i<n;i++){
            cout<<prefix2[i]<<" ";
            if(prefix1[i]==prefix2[i])
            return i+1;
        }
        return -1;
    }
};