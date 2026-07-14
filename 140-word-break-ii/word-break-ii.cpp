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
        pair<TrieNode*,bool> find(string temp){
            TrieNode* curr=this;
            for(char x:temp){
                int idx=x-'a';
                if(!curr->child[idx]) return {curr,false};
                curr=curr->child[idx];
            }
            return {curr,true};
        }
    };
    void backtrack(TrieNode* root, vector<string> &words, vector<string> &res, vector<string> curr){
        if(root->isEnd){
            string temp="";
            for(auto x:curr){
                temp+=x;
                temp+=" ";
            }
            temp.pop_back();
            res.push_back(temp);
            return;
        }
        for(int i=0;i<words.size();i++){
            pair<TrieNode*,bool> p=root->find(words[i]);
            if(p.second){
                curr.push_back(words[i]);
                backtrack(p.first,words,res,curr);
                curr.pop_back();
            }
        }
    }
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        TrieNode* root=new TrieNode();
        root->insert(s);
        vector<string>res,curr;
        backtrack(root,wordDict,res,curr);
        return res;
    }
};