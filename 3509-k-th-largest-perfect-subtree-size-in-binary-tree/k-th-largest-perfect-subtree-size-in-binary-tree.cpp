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
    priority_queue<int>maxHeap;
    pair<int,bool> postorder(TreeNode* root){
        if(!root) return {0,true};
        pair<int,bool> left=postorder(root->left);
        pair<int,bool> right=postorder(root->right);
        if(left.second && right.second && left.first==right.first){
            maxHeap.push(left.first+right.first+1);
            return {left.first+right.first+1,true};
        }
        else return {0,false};
    }
    int kthLargestPerfectSubtree(TreeNode* root, int k) {
        postorder(root);
        k--;
        while(!maxHeap.empty() && k--) maxHeap.pop();
        return maxHeap.empty()?-1:maxHeap.top();
    }
};