class Solution {
public:
    int getKth(int lo, int hi, int k) {
        vector<pair<int,int>>answer;
        for(int i=lo;i<=hi;i++){
        int temp=i;
        int count=0;
        while(temp!=1){
        if(temp%2==0){
        temp/=2;
        }
        else{
            temp=3*temp+1;
        }
        count++;
        }
        answer.push_back({i,count});
        }
        sort(answer.begin(),answer.end(),[](const pair<int,int>&a,const pair<int,int>&b){
            if(a.second==b.second)
            return a.first<b.first;
            return a.second<b.second;
        });
        return answer[k-1].first;
    }
};