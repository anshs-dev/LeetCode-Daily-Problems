class Solution {
public:
    string generateTheString(int n) {
        string result="";
        if(n%2!=0){
            while(n--){
                result+='a';
            }
            return result;
        }
        else{
            result+='b';
            while(n-->1){
                result+='a';
            }
        }
        return result;
    }
};