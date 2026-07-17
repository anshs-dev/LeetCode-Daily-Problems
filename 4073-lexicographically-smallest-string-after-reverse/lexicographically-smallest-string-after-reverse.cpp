class Solution {
public:
    string lexSmallest(string s) {
        string res="~";
        for(int i=1;i<=s.size();i++){
            string temp=s;
            ranges::reverse(temp.begin(),temp.begin()+i);
            res=min(res,temp);
            temp=s;
            ranges::reverse(temp.end()-i,temp.end());
            res=min(res,temp);
        }
        return res;
    }
};