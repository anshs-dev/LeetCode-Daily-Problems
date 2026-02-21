class Solution {
public:
    void backtrack(vector<vector<int>> &result, vector<int> &temp, vector<vector<int>> &graph, int i,int target){
        if(i>=graph.size()) return;
        if(temp.back()==target){
            result.push_back(temp);
            return;
        }
        for(int j=0;j<graph[i].size();j++){
            temp.push_back(graph[i][j]);
            backtrack(result,temp,graph,graph[i][j],target);
            temp.pop_back();
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> result;
        vector<int>temp;
        temp.push_back(0);
        backtrack(result,temp,graph,0,graph.size()-1);
        return result;
    }
};