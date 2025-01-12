class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int count=0,index=0;
        for(int i=0;i<trainers.size() && index<players.size();){
            if(trainers[i]>=players[index]){
             count++;
             index++;
             i++;
            }
            else {
             i++;
            }
        }
        return count;
    }
};