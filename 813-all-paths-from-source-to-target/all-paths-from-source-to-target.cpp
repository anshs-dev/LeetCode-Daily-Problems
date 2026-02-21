class Solution {
public:
    void backtrack(vector<vector<int>> &result, vector<vector<int>> &graph, vector<int> &temp, int i, int last){
        if(temp.back()==last){
            result.push_back(temp);
            return;
        } 
        for(int j=0;j<graph[i].size();j++){
            temp.push_back(graph[i][j]);
            backtrack(result,graph,temp,graph[i][j],last);
            temp.pop_back();
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<int>temp;
        temp.push_back(0);
        vector<vector<int>> result;
        backtrack(result,graph,temp,0,graph.size()-1);
        return result;
    }
};