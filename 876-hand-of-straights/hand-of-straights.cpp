class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        map<int,int>m;
        for(int x:hand) m[x]++;
        while(!m.empty()){
            if(m.size()<groupSize) return false;
            int prev=-1;
            int count=1;
            for(auto &x:m){
                if(prev==-1){
                    prev=x.first;
                    x.second--;
                }
                else{
                    if(x.first-prev!=1) return false;
                    x.second--;
                    prev=x.first;
                }
                if(x.second==0) m.erase(x.first);
                if(count==groupSize) break;
                count++;
            }
        }
        return true;
    }
};