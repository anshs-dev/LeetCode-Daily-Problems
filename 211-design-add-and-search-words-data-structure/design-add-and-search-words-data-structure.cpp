class WordDictionary {
public:
    struct TrieNode{
        TrieNode* child[26]={};
        bool isEnd=false;
    };
    TrieNode *root;
    WordDictionary() {
        root=new TrieNode();
    }
    
    void addWord(string word) {
        TrieNode* curr=root;
        for(char x:word){
            int idx=x-'a';
            if(!curr->child[idx]) curr->child[idx]=new TrieNode();
            curr=curr->child[idx];
        }
        curr->isEnd=true;
    }
    bool dfs(TrieNode* curr, string word, int j){
        if(j==word.size()) return curr->isEnd;
        for(int i=0;i<26;i++){
            if((word[j]=='.' || i==word[j]-'a') && curr->child[i] && dfs(curr->child[i],word,j+1)) return true;
        }
        return false;
    }
    bool search(string word) {
        TrieNode* curr=root;
        return dfs(curr,word,0);
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */