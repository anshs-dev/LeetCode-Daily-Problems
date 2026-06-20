class Solution {
public:
    struct bst{
        bool isvalid=true;
        long long mine=LLONG_MAX;
        long long maxe=LLONG_MIN;
    };
    bst helper(TreeNode* root){
        if(!root) return {true,LLONG_MAX,LLONG_MIN};
        bst left=helper(root->left);
        bst right=helper(root->right);
        if(!left.isvalid || !right.isvalid || root->val<=left.maxe || root->val>=right.mine) return {false,INT_MAX,INT_MIN};
        return {true,min(root->val*1LL,left.mine),max(root->val*1LL,right.maxe)};
    }
    bool isValidBST(TreeNode* root) {
        return helper(root).isvalid;
    }
};