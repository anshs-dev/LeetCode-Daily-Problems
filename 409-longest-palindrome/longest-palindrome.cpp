class Solution {
public:
    int longestPalindrome(string s) {
      unordered_map<char,int>m;
      for(char x:s)
      m[x]++;
      int len=0;
      int flag=0;
      for(auto &x:m){
        if(x.second%2==0){
            len+=x.second;
        }
        else{
          len+=(x.second-1);
          flag=1;
        }
      }
      if(flag==1)
      return len+1;
      else
      return len;
    }
};