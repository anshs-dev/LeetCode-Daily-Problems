class Solution {
public:
    int maxOperations(string s) {
        int count=0,streak=0,right=s.length()-1;
        while(right>=0){
            if(s[right]=='1'){
                count+=streak;
                right--;
            }
            else if(s[right]=='0'){
                while(right>=0 && s[right]!='1'){
                    right--;
                }
            streak++;
            }
        }
        return count;
    }
};