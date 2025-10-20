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
    void dfs(TreeNode *root,string temp,vector<string>&res){
        temp+=to_string(root->val);
        if(!root->left && !root->right)  res.push_back(temp);
        temp+="->";
        if(root->left) dfs(root->left,temp,res);
        if(root->right) dfs(root->right,temp,res);        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>result;
        dfs(root,"",result);
        return result;
    }
};