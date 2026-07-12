class Solution {
public:
    struct TrieNode{
        TrieNode* child[26]={};
        bool isEnd=false;
    TrieNode(){
        for(int i=0;i<26;i++) this->child[i]=nullptr;
    }
    void insert(string temp){
        TrieNode* curr=this;
        for(char x:temp){
            int idx=x-'a';
            if(!curr->child[idx]) curr->child[idx]=new TrieNode();
            curr=curr->child[idx];
        }
        curr->isEnd=true;
    }
    string bring(string temp){
        TrieNode* curr=this;
        string res="";
        for(char x:temp){
            int idx=x-'a';
            if(curr->child[idx]){
                res+=x;
                curr=curr->child[idx];
            }
            else return temp;
            if(curr->isEnd) break;
        }
        return res.size()>0?res:temp;
    }
    };
    string replaceWords(vector<string>& dictionary, string sentence) {
        TrieNode* root=new TrieNode();
        for(auto x:dictionary) root->insert(x);
        stringstream ss(sentence);
        string word;
        vector<string>v;
        while(ss>>word) v.push_back(word);
        string res="";
        for(auto x:v){
            res+=root->bring(x);
            res+=" ";
        }
        res.pop_back();
        return res;
    }
};