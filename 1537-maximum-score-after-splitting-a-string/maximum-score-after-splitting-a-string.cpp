class Solution {
public:
    int maxScore(string s) {
        vector<int>prefix_zero(s.length(),0);
        if(s[0]=='0')
        prefix_zero[0]=1;
        for(int i=1;i<s.length();i++){
        if(s[i]=='0')
        prefix_zero[i]=prefix_zero[i-1]+1;
        else
        prefix_zero[i]=prefix_zero[i-1];
        }
        vector<int>prefix_one(s.length(),0);
        if(s[s.length()-1]=='1')
        prefix_one[s.length()-1]=1;
        for(int i=s.length()-2;i>=0;i--){
            if(s[i]=='1')
            prefix_one[i]=prefix_one[i+1]+1;
            else
            prefix_one[i]=prefix_one[i+1];
        }
        int count=0;
        if(prefix_zero[s.length()-1]==0 || prefix_one[0]==0)
        count--;
        for(int i=0;i<s.length()-1;i++){
            count=max(count,prefix_zero[i]+prefix_one[i+1]);
        }
        return count;

    }
};