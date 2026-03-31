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
    void helper(TreeNode* r){
        if(!r) return;
        swap(r->left,r->right);
        helper(r->left);
        helper(r->right);
    }
    TreeNode* invertTree(TreeNode* root) {
        if(!root) return nullptr;
        helper(root);
        return root;
    }
};