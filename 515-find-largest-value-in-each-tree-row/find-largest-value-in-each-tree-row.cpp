class Solution {
public:
    vector<int>ans;
    void preorder(TreeNode* root, int level){
        if(!root) return;
        if(ans.size()<=level) ans.push_back(INT_MIN);
        ans[level]=max(ans[level],root->val);
        preorder(root->left,level+1);
        preorder(root->right,level+1);
    }
    vector<int> largestValues(TreeNode* root) {
        if(!root) return {};
        preorder(root,0);
        return ans;
    }
};