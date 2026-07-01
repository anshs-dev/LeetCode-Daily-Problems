class Solution {
public:
    struct dnode{
        int include=0;
        int exclude=0;
    };
    dnode dfs(TreeNode* root){
        if(!root) return {0,0};
        dnode left=dfs(root->left);
        dnode right=dfs(root->right);
        return {left.exclude+right.exclude+root->val,max(left.exclude,left.include)+max(right.include,right.exclude)};
    }
    int rob(TreeNode* root) {
        dnode temp=dfs(root);
        return max(temp.include,temp.exclude);
    }
};