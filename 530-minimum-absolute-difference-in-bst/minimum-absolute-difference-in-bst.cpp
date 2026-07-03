/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void helper(TreeNode* root, long long& prev, long long& ans){
        if(!root) return;
        helper(root->left,prev,ans);
        ans=min(ans,abs(1LL*root->val-prev));
        prev=root->val;
        helper(root->right,prev,ans);
    }
    int getMinimumDifference(TreeNode* root) {
        long long prev=INT_MIN;
        long long ans=INT_MAX;
        helper(root,prev,ans);
        return ans;
    }
};