/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,unsigned long long>>q;
        q.push({root,0});
        unsigned long long res=0;
        while(!q.empty()){
            int size=q.size();
            unsigned long long left=q.front().second;
            while(size--){
                res=max(res,q.front().second-left);
                if(q.front().first->left) q.push({q.front().first->left,q.front().second*2});
                if(q.front().first->right) q.push({q.front().first->right,q.front().second*2+1});
                q.pop();
            }
        }
        return res+1;
    }
};