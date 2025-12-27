class Solution {
public:
    int mostBooked(int n, vector<vector<int>>& meetings) {
        sort(meetings.begin(),meetings.end());
        priority_queue<long long,vector<long long>,greater<long long>>rooms;
        for(int i=0;i<n;i++) rooms.push(i);
        priority_queue<pair<long long,int>,vector<pair<long long,int>>,greater<pair<long long,int>>>endtime;
        vector<long long>v(n,0);
        for(auto x:meetings){
            while(!endtime.empty() && endtime.top().first<=x[0]){
                rooms.push(endtime.top().second);
                endtime.pop();
            }
            if(!rooms.empty()){
                long long room=rooms.top();
                rooms.pop();
                v[room]++;
                endtime.push({x[1],room});
            }
            else{
                long long room=endtime.top().second;
                v[room]++;
                long long end=endtime.top().first;
                endtime.pop();
                endtime.push({end+x[1]-x[0],room});
            }
        }
        int max_freq=0,min_room=INT_MAX;
        for(int i=0;i<v.size();i++){
        if(v[i]>max_freq) {
        max_freq=v[i];
        min_room=i;
      } else if(v[i]==max_freq) {
        min_room=min(min_room, i);
      }
        }
        return min_room;
    }
};