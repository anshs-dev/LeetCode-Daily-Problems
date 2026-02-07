class Solution {
public:
    int minimumDeletions(string s) {
        int count=0,b_count=0;
        for(char x:s){
            if(x=='a'){
                if(b_count>0) count=min(b_count,count+1);
            }
            else b_count++;
        }
        return count;
    }
};