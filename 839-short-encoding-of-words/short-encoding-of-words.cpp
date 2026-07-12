class Solution {
public:
    struct TrieNode{
        TrieNode *child[26];
        bool isEnd=false;
        int insert(string word){
            int count=0;
            TrieNode* curr=this;
            reverse(word.begin(),word.end());
            bool alr=false;
            for(char x:word){
                int idx=x-'a';
                if(!curr->child[idx]){ 
                    curr->child[idx]=new TrieNode();
                    count++;
                    alr=true;
                }
                curr=curr->child[idx];
            }
            curr->isEnd=true;
            if(alr) return word.size()+1;
            return count==0?0:count+1;
        }
    };
    int minimumLengthEncoding(vector<string>& words) {
        TrieNode* root=new TrieNode();
        sort(words.begin(),words.end(),[](string &a, string &b){
            return a.size()>b.size();
        });
        int res=0;
        for(auto x:words){ 
            res+=(root->insert(x));
            cout<<res<<" ";
        }
        return res;
    }
};