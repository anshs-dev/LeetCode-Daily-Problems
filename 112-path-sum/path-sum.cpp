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
    bool check=false;
    void helper(TreeNode* root,int target){
        if(!root) return;
        if(!root->left && !root->right && root->val==target){ 
            check=true;
            return;
        }
        helper(root->left,target-root->val);
        helper(root->right,target-root->val);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        helper(root,targetSum);
        return check;
    }
};