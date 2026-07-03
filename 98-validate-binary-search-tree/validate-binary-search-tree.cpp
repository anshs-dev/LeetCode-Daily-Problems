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
    bool helper(TreeNode* root, long long smallest, long long greatest){
        if(!root) return true;
        if(root->val>=smallest || root->val<=greatest) return false;
        bool left=helper(root->left,root->val,greatest);
        bool right=helper(root->right,smallest,root->val);
        return left && right;
    }
    bool isValidBST(TreeNode* root) {
        return helper(root,LLONG_MAX,LLONG_MIN);
    }
};