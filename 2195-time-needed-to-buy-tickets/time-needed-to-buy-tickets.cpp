class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int val=tickets[k];
        int time=0;
        for(int i=0;i<=k;i++){
            if(tickets[i]<val){
                time+=tickets[i];
            }
            else{
                time+=val;
            }
        }
        for(int i=k+1;i<tickets.size();i++){
            if(tickets[i]+1<=val){
                time+=tickets[i];
            }
            else{
                time+=val-1;
            }
        }
        return time;
    }
};