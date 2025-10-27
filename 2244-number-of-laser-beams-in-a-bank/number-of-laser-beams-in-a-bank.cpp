class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int result=0;
        vector<int>v;
        for(string x:bank){
            int count=0;
            for(char c:x) if(c=='1') count++;
            if(count>0) v.push_back(count);
        }
        for(int i=1;i<v.size();i++) result+=v[i]*v[i-1];
        return result;
    }
};