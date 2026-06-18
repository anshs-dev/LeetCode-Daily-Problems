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
    int res=INT_MIN;
    struct info{
        bool isvalid=true;
        int sum=0;
        int minsum=INT_MAX;
        int maxsum=INT_MIN;
        void print(){
            cout<<isvalid<<" "
                <<sum<<" "
                <<minsum<<" "
                <<maxsum<<endl;
        }
    };
    info helper(TreeNode* root){
        if(!root) return {true,0,INT_MAX,INT_MIN};
        info left=helper(root->left);
        info right=helper(root->right);
        res=max(res,max(left.sum,right.sum));
        /**
        cout<<root->val<<" "<<res<<endl;
        left.print();
        right.print();
        cout<<endl<<endl;
        **/
        //if(!root->left && !root->right) return {true,root->val,root->val,root->val};
        if(left.isvalid && right.isvalid && root->val>left.maxsum && root->val<right.minsum) return {true,left.sum+right.sum+root->val,min(left.minsum,min(root->val,right.minsum)),max(left.maxsum,max(right.maxsum,root->val))};
        return {false,max(left.sum,right.sum),min(left.minsum,root->val),max(right.maxsum,root->val)};
    }
    int maxSumBST(TreeNode* root) {
        res=max(res,helper(root).sum);
        return res<=0?0:res;
    }
};