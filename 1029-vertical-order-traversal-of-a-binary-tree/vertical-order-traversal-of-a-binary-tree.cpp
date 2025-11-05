class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        if(!root) return {};
        map<int,vector<int>>m;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            int size=q.size();
            unordered_map<int,vector<int>>m2;
            while(size--){
                if(q.front().first->left) q.push({q.front().first->left,q.front().second-1});
                if(q.front().first->right) q.push({q.front().first->right,q.front().second+1});
                m2[q.front().second].push_back(q.front().first->val);
                q.pop();
            }
            for(auto x:m2){
                vector<int>t=x.second;
                sort(t.begin(),t.end());
                m[x.first].insert(m[x.first].end(),t.begin(),t.end());
            }
        }
        vector<vector<int>>result;
        for(auto x:m){
            vector<int>temp=x.second;
            result.push_back(temp);
        }
        return result;
    }
};