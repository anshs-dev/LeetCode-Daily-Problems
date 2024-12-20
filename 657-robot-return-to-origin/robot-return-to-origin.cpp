class Solution {
public:
    bool judgeCircle(string moves) {
        int a=0,b=0;
        for(char x:moves){
            if(x=='U'){
                a++;
            }
            else if(x=='D'){
                a--;
            }
            else if(x=='L'){
                b++;
            }
            else{
                b--;
            }
        }
        return a==0 && b==0;
    
    }
};