class Solution {
public:
    int minDepth(TreeNode* root) {
        if(!root) return 0;
        int left=0,right=0;
        if(root->left) left=1+minDepth(root->left);
        if(root->right) right=1+minDepth(root->right);
        if(left==0 && right==0) return 1;
        if(left!=0 && right!=0) return min(left,right);
        if(left==0) return right;
        return left;
        //return 1+min(minDepth(root->left),minDepth(root->right));
    }
};