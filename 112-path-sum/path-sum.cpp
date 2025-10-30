class Solution {
public:
    bool res=false;
    void helper(TreeNode* root, int sum){
        if(!root) return;
        if(!root->left && !root->right && root->val==sum){
            res=true;
            return;
        }
        helper(root->left,sum-root->val);
        helper(root->right,sum-root->val);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root) return false;
        helper(root,targetSum);
        return res;
    }
};