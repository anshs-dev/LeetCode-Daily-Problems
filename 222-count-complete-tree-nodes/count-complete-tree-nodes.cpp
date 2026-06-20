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
    int lh(TreeNode* root){
        int temp=0;
        TreeNode* t=root;
        while(t){
            temp++;
            t=t->left;
        }
        return temp;
    }
    int rh(TreeNode* root){
        int temp=0;
        TreeNode* t=root;
        while(t){
            temp++;
            t=t->right;
        }
        return temp;
    }
    int countNodes(TreeNode* root) {
        int l=lh(root);
        int r=rh(root);
        if(l==r) return (1<<l)-1;
        return 1+countNodes(root->left)+countNodes(root->right);
    }
};