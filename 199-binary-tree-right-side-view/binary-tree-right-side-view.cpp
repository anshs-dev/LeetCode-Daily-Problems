class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        if(!root) return {};
        vector<int>res;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size(),last=-1;
            while(size--){
                if(q.front()->left) q.push(q.front()->left);
                if(q.front()->right) q.push(q.front()->right);
                last=q.front()->val;
                q.pop();
            }
            res.push_back(last);
        }
        return res;
    }
};