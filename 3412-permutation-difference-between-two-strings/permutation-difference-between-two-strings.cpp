class Solution {
public:
    int findPermutationDifference(string s, string t) {
      unordered_map<char,int>m1;
      unordered_map<char,int>m2;
      for(int i=0;i<s.length();i++){
        m1[s[i]]=i;
        m2[t[i]]=i;
      }
      unordered_map<char,int>m3;
      for(auto &x:m1){
        char ch=x.first;
        if(m2.find(ch)!=m2.end()){
            m3[ch]=abs(m1[ch]-m2[ch]);
        }
      }
      int sum=0;
      for(auto &x:m3){
        sum+=x.second;
      }
      return sum;
    }
};