class Solution {
public:
    int lh(TreeNode* root){
        int len=1;
        while(root){
            len++;
            root=root->left;
        }
        return len;
    }
    int rh(TreeNode* root){
        int len=1;
        while(root){
            len++;
            root=root->right;
        }
        return len;
    }
    int countNodes(TreeNode* root) {
        if(!root) return 0;
        int l=lh(root->left);
        int r=rh(root->right);
        if(l==r) return (1<<l)-1;
        return countNodes(root->left)+countNodes(root->right)+1;
    }
};