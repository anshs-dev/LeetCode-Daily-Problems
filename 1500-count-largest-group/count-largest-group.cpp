class Solution {
public:
    int countLargestGroup(int n) {
        unordered_map<int,int>m;
        int max_size=0;
        for(int i=1;i<=n;i++){
            int temp=i,sum=0;
            while(temp!=0){
                sum+=temp%10;
                temp/=10;
            }
            m[sum]++;
            max_size=max(max_size,m[sum]);
        }
        int count=0;
        for(auto &x:m){
            if(x.second==max_size)
            count++;
        }
        return count;
    }
};