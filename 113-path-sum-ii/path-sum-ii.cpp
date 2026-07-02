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
    void helper(TreeNode* root, int target, vector<vector<int>> &res, vector<int> &curr){
        if(!root) return;
        if(!root->left && !root->right && target==root->val){
            curr.push_back(root->val);
            res.push_back(curr);
            curr.pop_back();
            return;
        }
        curr.push_back(root->val);
        helper(root->left,target-root->val,res,curr);
        helper(root->right,target-root->val,res,curr);
        if(!curr.empty()) curr.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> res;
        vector<int>curr;
        helper(root,targetSum,res,curr);
        return res;
    }
};