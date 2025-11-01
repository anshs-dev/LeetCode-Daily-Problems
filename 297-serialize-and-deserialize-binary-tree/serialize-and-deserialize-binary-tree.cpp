/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
    void preorder(TreeNode* root,string &temp){
        if(!root){
            temp.append("n");
            temp.append("/");
            return;
        }
        temp.append(to_string(root->val));
        temp.append("/");
        preorder(root->left,temp);
        preorder(root->right,temp);
    }
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string temp="";
        preorder(root,temp);
        return temp;
    }
    TreeNode* build(queue<string> &q){
        if(q.empty()) return nullptr;
        string val=q.front();
        q.pop();
        if(val=="n") return nullptr;
        TreeNode* root=new TreeNode(stoi(val));
        root->left=build(q);
        root->right=build(q);
        return root;
    }
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        queue<string>q;
        int i=0;
        cout<<data<<endl;
        while(i<data.length()){
            string num="";
            while(i<data.length() && data[i]!='/' && data[i]!='n'){
                num.push_back(data[i]);
                i++;
            }
            if(!num.empty()) q.push(num);
            if(data[i]=='n') q.push("n");
            i++;
        }
        queue<string>q2=q;
        while(!q.empty()){
            cout<<q.front()<<" ";
            q.pop();
        }
        q=q2;
        return build(q);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));