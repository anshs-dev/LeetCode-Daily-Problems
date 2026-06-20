class Solution {
public:
    vector<unsigned long long>leftidx;
    unsigned long long res=0;
    void helper(TreeNode* root, unsigned long long level, unsigned long long idx){
        if(!root) return;
        if(leftidx.size()==level) leftidx.push_back(idx);
        res=max(res,idx-leftidx[level]);
        helper(root->left,level+1,idx*2);
        helper(root->right,level+1,idx*2+1);
    }
    int widthOfBinaryTree(TreeNode* root) {
        helper(root,0,0);
       // for(int x:leftidx) cout<<x<<endl;
        return res+1;
    }
};