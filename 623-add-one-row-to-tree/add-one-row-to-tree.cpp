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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1){
            TreeNode* t=new TreeNode(val);
            t->left=root;
            return t;
        }
        queue<TreeNode*>q;
        q.push(root);
        int temp=2;
        while(!q.empty()){
            int size=q.size();
            while(size--){
                if(temp==depth){ 
                    if(q.front()->left){
                    TreeNode* t=new TreeNode(val);
                    t->left=q.front()->left;
                    q.front()->left=t;
                    }
                    else{
                        q.front()->left=new TreeNode(val);
                    }
                    if(q.front()->right){
                        TreeNode* t=new TreeNode(val);
                        t->right=q.front()->right;
                        q.front()->right=t;
                    }
                    else{
                        q.front()->right=new TreeNode(val);
                    }
                    q.pop();
                }
                else{
                    if(q.front()->left) q.push(q.front()->left);
                    if(q.front()->right) q.push(q.front()->right);
                    q.pop();
                }
            }
            temp++;
        }
        return root;
    }
};