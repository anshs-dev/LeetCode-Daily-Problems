class Solution {
public:
    bool squareIsWhite(string chess) {
        if(chess[0]=='a' || chess[0]=='c' || chess[0]=='e' || chess[0]=='g'){
            int num=int(chess[1]);
            if(num%2==0)
            return true;
            else
            return false;
        }
        else{
            int num=int(chess[1]);
            if(num%2!=0)
            return true;
            else
            return false;
        }
    }
};