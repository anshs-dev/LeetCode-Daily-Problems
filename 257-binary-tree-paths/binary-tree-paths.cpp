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
    void dfs(TreeNode* root, vector<string> &temp, string curr){
        if(!root) return;
        curr+=to_string(root->val);
        if(!root->left && !root->right){
            temp.push_back(curr);
            return;
        }
        else curr+=("->");
        dfs(root->left,temp,curr);
        dfs(root->right,temp,curr);
        curr.pop_back();
    }
    vector<string> binaryTreePaths(TreeNode* root) {
       vector<string>temp;
       string curr="";
       dfs(root,temp,curr);
       return temp; 
    }
};