class Solution {
public:
    string convertToBase7(int num) {
        string x="";
        int flag=0;
        if(num<0){
        num*=-1;
        flag=1;
        }
        
        if(num==0)
        return "0";
        while(num!=0){
            int rem=num%7;
            x=to_string(rem)+x;
            num/=7;
        }
        if(flag==1)
        return "-"+x;
        return x;
    }
};