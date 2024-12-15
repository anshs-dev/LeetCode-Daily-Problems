class Solution {
public:
    int countHillValley(vector<int>&s) {
      int count=0;
      s.erase(std::unique(s.begin(),s.end()),s.end());
       for(int i=1;i<s.size()-1;i++){
    if((s[i]<s[i+1] && s[i]<s[i-1]) || (s[i]>s[i+1] && s[i]>s[i-1]))
    count++;
       }
        return count;
    }
};