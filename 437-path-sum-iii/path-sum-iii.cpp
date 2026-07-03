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
    void helper(TreeNode* root, int target, unordered_map<long long,int> &m, int& count, long long sum){
        if(!root) return;
        sum+=root->val;
        if(m.count(sum-target)) count+=m[sum-target];
        m[sum]++;
        helper(root->left,target,m,count,sum);
        helper(root->right,target,m,count,sum);
        m[sum]--;
    }
    int pathSum(TreeNode* root, int targetSum) {
        unordered_map<long long, int>m;
        m[0]=1;
        int count=0;
        helper(root,targetSum,m,count,0);
        return count;
    }
};