class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>>ladder;
        for(char x:s){
            if(!ladder.empty() && ladder.top().first==x){
                ladder.top().second+=1;
                if(ladder.top().second==k)
                ladder.pop();
            }
            else{
                ladder.push({x,1});
            }
        }
        string result;
        while(!ladder.empty()){
            result.insert(result.begin(),ladder.top().second,ladder.top().first);
            ladder.pop();
        }
        return result;
    }
};