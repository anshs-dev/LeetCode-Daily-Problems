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
    TreeNode* prev=nullptr,*curr=nullptr,*next=nullptr;
    void inorder(TreeNode* root){
        if(!root) return;
        inorder(root->left);
        if(prev!=nullptr && prev->val>root->val){
            if(curr==nullptr) curr=prev;
            next=root;
        }
        prev=root;
        inorder(root->right);
    }
    void recoverTree(TreeNode* root) {
        inorder(root);
        curr->val=curr->val^next->val;
        next->val=curr->val^next->val;
        curr->val=curr->val^next->val;
    }
};