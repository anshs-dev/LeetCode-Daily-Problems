class Solution {
public:
    int max_sum=-11111111;
    int helper(TreeNode* root){
        if(!root) return 0;
        int lh=max(helper(root->left),0);
        int rh=max(helper(root->right),0);
        max_sum=max(max_sum,root->val+lh+rh);
        return max(lh,rh)+root->val;
    }
    int maxPathSum(TreeNode* root) {
       helper(root); 
       return max_sum;
    }
};