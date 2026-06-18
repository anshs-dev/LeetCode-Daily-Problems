class Solution {
public:
    pair<TreeNode*,int> postorder(TreeNode* root, int depth){
        if(!root) return {nullptr,depth};
        depth++;
        auto left=postorder(root->left,depth);
        auto right=postorder(root->right,depth);
        if(left.second==right.second) return {root,left.second};
        if(left.second>right.second) return {left.first,left.second};
        return {right.first,right.second};
    }
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        return postorder(root,0).first;
    }
};