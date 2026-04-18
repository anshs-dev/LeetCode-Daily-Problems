class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        queue<string>q;
        q.push(beginWord);
        unordered_set<string>st(wordList.begin(),wordList.end()),visited;
        int count=1;
        if(!st.count(endWord)) return 0;
        while(!q.empty()){
            int size=q.size();
            while(size--){
                string temp=q.front();
                if(temp==endWord) return count;
                for(int i=0;i<(int)temp.size();i++){
                    string f=temp;
                    for(char j='a';j<='z';j++){
                        f[i]=j;
                        if(st.count(f) && !visited.count(f)){
                            q.push(f);
                            visited.insert(f);
                        }
                    }
                }
                q.pop();
            }
            count++;
        }
        return 0;

    }
};