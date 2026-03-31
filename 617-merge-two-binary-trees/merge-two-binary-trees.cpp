class Solution {
public:
    TreeNode* merge(TreeNode* l, TreeNode *r){
        if(!l && !r) return nullptr;
        if(!l) return r;
        if(!r) return l;
        l->val+=r->val;
        l->left=merge(l->left,r->left);
        l->right=merge(l->right,r->right);
        return l;
    }
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        return merge(root1,root2);
    }
};