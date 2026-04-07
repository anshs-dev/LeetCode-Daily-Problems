/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<int,vector<int>> m;
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
        unordered_set<int>st;
        queue<int>qt;
        qt.push(target->val);
        vector<int>res;
        int dist=0;
        /**
        for(auto a:m){
            cout<<a.first<<": ";
            for(int x:a.second){
                cout<<x<<" ";
            }
        }
        */
        while(!qt.empty()){
            if(dist==k){
                while(!qt.empty()){
                    res.push_back(qt.front());
                    qt.pop();
                }
                return res;
            }
            int size=qt.size();
            while(size--){
                st.insert(qt.front());
                for(auto x:m[qt.front()]) if(!st.count(x)) qt.push(x);
                qt.pop();
            }
            dist++;
        }
        return {};
    }
};