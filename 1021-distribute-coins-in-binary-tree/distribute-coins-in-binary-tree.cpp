class Solution {
public:
    int moves=0;
    int helper(TreeNode* root, int sum){
        if(!root) return 0;
        int left=helper(root->left,sum);
        int right=helper(root->right,sum);
        moves+=abs(left)+abs(right);
        return root->val+left+right-1;
    }
    int distributeCoins(TreeNode* root) {
        helper(root,0);
        return moves;
    }
};