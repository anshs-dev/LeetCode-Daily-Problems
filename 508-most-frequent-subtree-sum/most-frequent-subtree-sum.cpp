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
    unordered_map<int,int>m;
    int helper(TreeNode* root){
        if(!root) return 0;
        int left=helper(root->left);
        int right=helper(root->right);
        m[left+right+root->val]++;
        return left+right+root->val;
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        helper(root);
        int max_freq=0;
        for(auto x:m) max_freq=max(max_freq,x.second);
        vector<int>res;
        for(auto x:m) if(x.second==max_freq) res.push_back(x.first);
        return res;
    }
};