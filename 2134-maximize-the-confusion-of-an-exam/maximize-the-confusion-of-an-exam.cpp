class Solution {
public:
    int maxConsecutiveAnswers(string ans, int k) {
        int max_len=0,count=0,left=0;
        for(int i=0;i<ans.size();i++){
            if(ans[i]=='F') count++;
            while(count>k){
                if(ans[left]=='F') count--;
                left++;
            }
            max_len=max(max_len,i-left+1);
        }
        count=0,left=0;
        for(int i=0;i<ans.size();i++){
            if(ans[i]=='T') count++;
            while(count>k){
                if(ans[left]=='T') count--;
                left++;
            }
            max_len=max(max_len,i-left+1);
        }
        return max_len;
    }
};