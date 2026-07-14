class StreamChecker {
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
        bool find(deque<char> &dq){
            TrieNode* curr=this;
            for(char x:dq){
                int idx=x-'a';
                if(!curr->child[idx]) return false;
                curr=curr->child[idx];
                if(curr->isEnd) return true;
            }
            return false;
        }
    };
    int len=0;
    TrieNode* root=new TrieNode();
    StreamChecker(vector<string>& words) {
        for(auto x:words){
            string temp=x;
            len=max(len,(int)x.size());
            reverse(temp.begin(),temp.end());
            root->insert(temp);
        }
    }
    string temp="";
    deque<char>dq;
    bool query(char letter) {
        dq.push_front(letter);
        while(dq.size()>len) dq.pop_back();
        return root->find(dq);
    }
};

/**
 * Your StreamChecker object will be instantiated and called as such:
 * StreamChecker* obj = new StreamChecker(words);
 * bool param_1 = obj->query(letter);
 */