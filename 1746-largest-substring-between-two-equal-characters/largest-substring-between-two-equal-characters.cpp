class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int max_dist=-1;
        for(int i=0;i<s.length();i++){
            int left=i;
            char first=s[i];
            int right=s.length()-1;
            while(s[right]!=first)
            right--;
            max_dist=max(max_dist,right-left-1);
        }
        return max_dist;
    }
};