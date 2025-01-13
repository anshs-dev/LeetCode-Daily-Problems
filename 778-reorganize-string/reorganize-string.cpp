class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int>m;
        for(char x:s){
            m[x]++;
        }
        string result="";
        priority_queue<pair<int,char>>maxHeap;
        for(auto x:m)
        maxHeap.push({x.second,x.first});
        while(!maxHeap.empty()){
            if(maxHeap.size()==1 && maxHeap.top().first>1)
            return "";
            if(maxHeap.size()==1 && maxHeap.top().first==1){
                result+=maxHeap.top().second;
                return result;
            }
            auto ele=maxHeap.top();
            maxHeap.pop();
            auto ele2=maxHeap.top();
            maxHeap.pop();
            result+=ele.second;
            ele.first--;
            if(ele.first!=0)
            maxHeap.push(ele);
            result+=ele2.second;
            ele2.first--;
            if(ele2.first!=0)
            maxHeap.push(ele2);
        }
        return result;
    }
};