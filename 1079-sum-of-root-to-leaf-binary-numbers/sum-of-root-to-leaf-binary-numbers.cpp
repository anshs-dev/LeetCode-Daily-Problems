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
    int sum=0;
    void dfs(TreeNode* root,int temp){
        if(!root) return;
        temp=temp*2+root->val;
        if(!root->left && !root->right){
            sum+=temp;
            return;
        }
        dfs(root->left,temp);
        dfs(root->right,temp);
    }
    int sumRootToLeaf(TreeNode* root) {
        dfs(root,0);
        return sum;
    }
};