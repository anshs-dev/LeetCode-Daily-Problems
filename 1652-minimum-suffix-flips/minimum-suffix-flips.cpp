class Solution {
public:
    int minFlips(string target) {
        char next='0';
        int count=0;
        for(int i=0;i<target.length();i++){
            if(target[i]!=next){
            count++;
            next=target[i];
            }
        }
        return count;
    }
};