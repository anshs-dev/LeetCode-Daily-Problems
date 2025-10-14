class Solution {
public:
    void dfs(vector<vector<int>>& isConnected,vector<bool>& connected,int row){
        if(!connected[row]) return;
        connected[row]=false;
        for(int i=0;i<isConnected[0].size();i++){
            if(isConnected[row][i]==1 && connected[i]) dfs(isConnected,connected,i);
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<bool>connected(isConnected.size(),true);
        int count=0;
        for(int i=0;i<isConnected.size();i++){
            if(connected[i]){
                dfs(isConnected,connected,i);
                count++;
            }
        }
        return count;
    }
};