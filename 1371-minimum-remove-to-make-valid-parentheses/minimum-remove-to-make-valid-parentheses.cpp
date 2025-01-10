class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int count=0;
        string result="";
        for(char x:s){
            if(x=='('){
            count++;
            result+=x;
            }
            else if(x==')'){
                if(count>0){
                    result+=x;
                    count--;
                }
            }
            else{
                result+=x;
            }
        }
        while(count>0){
            int right=result.length()-1;
            while(result[right]!='('){
                right--;
            }
            result.erase(right,1);
            count--;
        }
        return result;
    }
};