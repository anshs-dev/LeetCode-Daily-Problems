class Solution {
public:
    struct TrieNode{
        TrieNode* child[26]={};
        bool isEnd=false;
        void insert(string temp){
            TrieNode* curr=this;
            for(char x:temp){
                int idx=x-'a';
                if(!curr->child[idx]) curr->child[idx]=new TrieNode();
                curr=curr->child[idx];
            }
            curr->isEnd=true;
        }
        bool search(string temp){
            TrieNode* curr=this;
            for(char x:temp){
                int idx=x-'a';
                if(!curr->child[idx]) return false;
                curr=curr->child[idx];
                if(!curr->isEnd) return false;
            }
            return true;
        }
    };
    string longestWord(vector<string>& words) {
        TrieNode* root=new TrieNode();
        for(auto x:words) root->insert(x);
        string res="";
        for(auto x:words){
            if(root->search(x)){
                if(x.size()==res.size()) res=min(res,x);
                if(x.size()>res.size()) res=x;
            }
        }
        return res;
    }
};