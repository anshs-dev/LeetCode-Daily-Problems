class Solution {
public:
    int countAsterisks(string s) {
        int current=0,flag=0;
        for(char x:s){
        if(x=='|' && flag==0){
            flag=1;
        }
        else if(x=='|' && flag==1){
            flag=0;
        }
        else if(x=='*' && flag==0)
        current++;
        }
        return current;
    }
};