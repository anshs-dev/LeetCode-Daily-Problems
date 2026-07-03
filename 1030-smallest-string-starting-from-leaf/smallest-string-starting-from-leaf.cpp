class Solution {
public:
    string res="";
    vector<char>t;
    void preorder(TreeNode* root, string temp){
        if(!root) return;
        temp+=t[root->val];
        if(!root->left && !root->right){
            reverse(temp.begin(),temp.end());
            if(res.empty()) res=temp;
            else res=min(res,temp);
        }
        preorder(root->left,temp);
        preorder(root->right,temp);
        temp.pop_back();
    }
    string smallestFromLeaf(TreeNode* root) {
        for(char i='a';i<='z';i++) t.push_back(i);
        preorder(root,"");
        return res;
    }
};