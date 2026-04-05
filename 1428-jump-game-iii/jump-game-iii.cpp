class Solution {
public:
    bool dfs(vector<int> &arr, int curr, vector<bool> &visited){
        if(curr<0 || curr>=arr.size() || visited[curr]) return false;
        if(arr[curr]==0) return true;
        visited[curr]=true;
        return dfs(arr,curr+arr[curr],visited) || dfs(arr,curr-arr[curr],visited);
    }
    bool canReach(vector<int>& arr, int start) {
        vector<bool>visited(arr.size()+1,false);
        return dfs(arr,start,visited);
    }
};