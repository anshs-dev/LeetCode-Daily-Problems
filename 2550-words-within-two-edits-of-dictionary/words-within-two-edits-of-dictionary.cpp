class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        vector<string>res;
        unordered_set<string>st;
        for(auto x:queries){
            string temp=x;
            for(auto a:dictionary){
                int count=0;
                for(int i=0;i<a.size();i++){
                    if(temp[i]!=a[i]) count++;
                }
                if(count<=2){
                    res.push_back(temp);
                    break;
                }
            }
        }
        return res;
    }
};