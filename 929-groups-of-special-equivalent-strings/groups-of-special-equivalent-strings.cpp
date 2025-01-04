class Solution {
public:
    int numSpecialEquivGroups(vector<string>& words) {
        unordered_set<string>s;
        for(string x:words){
            string odd="",even="";
            for(int i=0;i<x.length();i++){
                if(i%2)
                odd+=x[i];
                else
                even+=x[i];
            }
            sort(even.begin(),even.end());
            sort(odd.begin(),odd.end());
            s.insert(even+odd);
        }
        return s.size();
    }
};