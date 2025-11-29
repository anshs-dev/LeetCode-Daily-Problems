class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int max_g=sequence.length()/word.length();
        string res="";
        int temp=max_g;
        while(temp--) res+=word;
        temp=max_g;
        while(temp--){
            for(int i=0;i<=sequence.length()-res.length();i++) if(sequence.substr(i,res.length())==res) return temp+1;
            int l=word.length();
            while(l--) res.pop_back();
        }
        return 0;
    }
};