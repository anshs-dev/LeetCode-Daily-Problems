class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        int max_count=0;
        for(char x:s){
        if(x=='('){
            count++;
            max_count=max(max_count,count);
        }
        if(x==')'){
            count--;
            max_count=max(max_count,count);
        }
        }
        return max_count;
    }
};