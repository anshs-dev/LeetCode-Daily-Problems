class Solution {
public:
    string defangIPaddr(string address) {
        string result="";
        for(int i=0;i<address.length();i++){
            if(address[i]=='.')
            result=result+'['+'.'+']';
            else
            result+=address[i];
        }
        return result;
    }
};