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
    bool cous=true;
    int d1=0,d2=0;
    void helper(TreeNode* root,int x,int y,int h){
        if(!root) return;
        if(root->left && root->right && (root->left->val==x || root->right->val==x) && (root->left->val==y || root->right->val==y)){
            cous=false;
            return;
        }
        if(root->val==x) d1=h;
        if(root->val==y) d2=h;
        h++;
        helper(root->left,x,y,h);
        helper(root->right,x,y,h);
    }
    bool isCousins(TreeNode* root, int x, int y) {
        helper(root,x,y,0);
        return d1==d2 && cous;
    }
};