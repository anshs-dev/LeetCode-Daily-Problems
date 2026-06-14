class Solution {
public:
    bool check(TreeNode* root, vector<int> &temp, int i){
        if(i==temp.size()) return true;
        if(!root) return false;
        if(root->val==temp[i] && (check(root->left,temp,i+1) || check(root->right,temp,i+1))) return true;
        return false;
    }
    bool dfs(TreeNode* root, vector<int> &temp){
        if(!root) return false;
        if(root->val==temp[0] && check(root,temp,0)) return true;
        return dfs(root->left,temp) || dfs(root->right,temp);
    }
    bool isSubPath(ListNode* head, TreeNode* root) {
        vector<int>temp;
        ListNode* t=head;
        while(t){
            temp.push_back(t->val);
            t=t->next;
        }
        return dfs(root,temp);
    }
};