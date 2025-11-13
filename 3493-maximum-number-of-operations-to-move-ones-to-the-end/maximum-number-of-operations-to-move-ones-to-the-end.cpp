class Solution {
public:
    int maxOperations(string s) {
        int count=0,gap=0,last=s.length()-1,prev=0,curr=0;
        while(last>=0 && s[last]=='1') last--;
        for(;last>=0;last--){
            if(s[last]=='1'){
                count++;
                count+=gap;
            }
            else if(s[last]=='0' && prev==1) gap++;
            prev=s[last]=='0'?0:1;
        }
        return count;
    }
};