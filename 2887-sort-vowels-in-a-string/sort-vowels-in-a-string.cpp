class Solution {
public:
    string sortVowels(string s) {
        vector<char>v;
        for(char x:s){
            if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A' || x=='E' || x=='I' || x=='O' || x=='U')
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        int j=0;
        for(int i=0;i<s.length();i++){
            int x=s[i];
            if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A' || x=='E' || x=='I' || x=='O' || x=='U'){
            s[i]=v[j];
            j++;
        }
        }
        return s;
    }
};