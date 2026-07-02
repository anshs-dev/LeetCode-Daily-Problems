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
    bool ans=true;
    int helper(TreeNode* root){
        if(!root) return 0;
        int left=1+helper(root->left);
        int right=1+helper(root->right);
        if(abs(right-left)>1){
            ans=false;
            return 0;
        }
        return max(left,right);
    }
    bool isBalanced(TreeNode* root) {
        helper(root);
        return ans;
    }
};