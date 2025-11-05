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
    int count=0;
    unordered_map<long long,int>m;
    void helper(TreeNode* root, long long sum, int target){
        if(!root) return;
        sum+=root->val;
        if(m.count(sum-target)) count+=m[sum-target];
        m[sum]++;
        helper(root->left,sum,target);
        helper(root->right,sum,target);
        m[sum]--;
    }
    int pathSum(TreeNode* root, int targetSum) {
        m[0]=1;
        helper(root,0,targetSum);
        return count;
    }
};