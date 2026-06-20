class Solution {
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<int,vector<int>>m;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            if(q.front()->left){
                q.push(q.front()->left);
                m[q.front()->val].push_back(q.front()->left->val);
                m[q.front()->left->val].push_back(q.front()->val);
            }
            if(q.front()->right){
                q.push(q.front()->right);
                m[q.front()->val].push_back(q.front()->right->val);
                m[q.front()->right->val].push_back(q.front()->val);
            }
            q.pop();
        }
        vector<int>res;
        queue<int>q2;
        unordered_set<int>visited;
        q2.push(target->val);
        while(!q2.empty()){
            if(k==0){
                while(!q2.empty()){
                    res.push_back(q2.front());
                    q2.pop();
                }
                return res;
            }
            int size=q2.size();
            while(size--){
                visited.insert(q2.front());
                for(int x:m[q2.front()]) if(!visited.count(x)) q2.push(x);
                q2.pop();
            }
            k--;
        }
        return res;
    }
};