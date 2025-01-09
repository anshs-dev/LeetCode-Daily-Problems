class Solution {
public:
    int minSwaps(string s) {
        int open=0,swap=0;
        for(char x:s){
            if(x=='['){
                open++;
            }
            else{
                if(open>0)
                open--;
                else
                swap++;
            }
        }
        return (swap+1)/2;
    }
};