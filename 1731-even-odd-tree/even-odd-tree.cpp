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
    bool isEvenOddTree(TreeNode* root) {
        bool first=true;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            if(first){
                int num=-1,size=q.size();
                while(size--){
                    if(q.front()->val<=num || q.front()->val%2==0) return false;
                    if(q.front()->left) q.push(q.front()->left);
                    if(q.front()->right) q.push(q.front()->right);
                    num=q.front()->val;
                    q.pop();
                }
                first=!first;
            }
            else{
                int num=INT_MAX,size=q.size();
                while(size--){
                    if(q.front()->val>=num || q.front()->val%2==1) return false;
                    if(q.front()->left) q.push(q.front()->left);
                    if(q.front()->right) q.push(q.front()->right);
                    num=q.front()->val;
                    q.pop();
                }
                first=!first;
            }
        }
        return true;
    }
};