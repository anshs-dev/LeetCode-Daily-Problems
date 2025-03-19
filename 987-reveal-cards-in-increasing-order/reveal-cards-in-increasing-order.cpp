class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        vector<int>result(deck.size(),0);
        deque<int>dq;
        for(int i=0;i<deck.size();i++) dq.push_back(i);
        for(int x:deck){
            int index=dq.front();
            dq.pop_front();
            result[index]=x;
            if(!dq.empty()){
                dq.push_back(dq.front());
                dq.pop_front();
            }
        }
        return result;
    }
};