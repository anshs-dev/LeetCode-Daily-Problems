class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int>v;
        for(int i=1;i<=m;i++)
        v.push_back(i);
        vector<int>result;
        for(int x:queries){
            for(int i=0;i<m;i++){
                if(v[i]==x){
                result.push_back(i);
                v.erase(v.begin()+i);
                v.insert(v.begin(),1,x);
                break;
                }
            }
        }
        return result;
    }
};