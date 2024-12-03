class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>result;
        for(int i=0;i<=n;i++){
            int count=0;
            int temp=i;
            while(temp>0){
                if(temp%2==1)
                count++;
                temp/=2;
            }
            result.push_back(count);
        }
        return result;
    }
};