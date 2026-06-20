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
    bool inorder(TreeNode* root, long long mine,long long maxe){
        if(!root) return true;
        if(root->val<=mine || root->val>=maxe) return false;
        return inorder(root->left,mine,root->val) && inorder(root->right,root->val,maxe);
    }
    bool isValidBST(TreeNode* root) {
        return inorder(root,LLONG_MIN,LLONG_MAX);
    }
};