class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int a=0,b=0;
        for(char x:moves) if(x=='_') b++;
        else a=x=='L'?a-1:a+1;
        return abs(a)+b;
    }
};