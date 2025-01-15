class Solution {
public:
    long long minimumSteps(string s) {
        long long streak=0,count=0;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='0')
            streak++;
            else
            count+=streak;
        }
        return count;
    }
};