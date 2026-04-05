class Solution {
public:
    int minJumps(vector<int>& arr) {
        unordered_map<int,vector<int>>m;
        queue<pair<int,int>>q;
        vector<bool>visited(arr.size(),false);
        for(int i=0;i<arr.size();i++) m[arr[i]].push_back(i);
        q.push({arr[0],0});
        int count=0;
        while(!q.empty()){
            int size=q.size();
            while(size--){
            int num=q.front().first;
            int idx=q.front().second;
            if(idx==arr.size()-1) return count;
            q.pop();
            if(visited[idx]) continue;
            visited[idx]=true;
            if(idx<arr.size()-1 && !visited[idx+1]) q.push({arr[idx+1],idx+1});
            if(idx>0 && !visited[idx-1]) q.push({arr[idx-1],idx-1});
            for(auto x:m[num]){
                if(!visited[x]) q.push({num,x});
            }
            m[num].clear();
        }
        count++;
        }
        return count;
    }
};