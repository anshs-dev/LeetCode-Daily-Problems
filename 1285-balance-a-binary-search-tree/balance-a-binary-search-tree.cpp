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
    vector<int>sorted;
    void inorder(TreeNode* root){
        if(!root) return;
        inorder(root->left);
        sorted.push_back(root->val);
        inorder(root->right);
    }
    TreeNode* place(int left,int right){
        if(left>right) return nullptr;
        int mid=left+(right-left)/2;
        TreeNode* temp=new TreeNode(sorted[mid]);
        temp->left=place(left,mid-1);
        temp->right=place(mid+1,right);
        return temp;
    }
    TreeNode* balanceBST(TreeNode* root) {
        inorder(root);
        return place(0,sorted.size()-1);
    }
};