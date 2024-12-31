class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        string x=to_string(num1);
        string y=to_string(num2);
        string z=to_string(num3);
        int max_len=max({x.length(),y.length(),z.length()});
        if(x.length()!=max_len){
            x.insert(x.begin(),max_len-x.length(),'0');
        }
        if(y.length()!=max_len){
            y.insert(y.begin(),max_len-y.length(),'0');
        }
        if(z.length()!=max_len){
            z.insert(z.begin(),max_len-z.length(),'0');
        }
        int min_ele=0;
        for(int i=0;i<max_len;i++){
        min_ele=min_ele*10+min({x[i]-'0',y[i]-'0',z[i]-'0'});
        }
        return min_ele;
    }
};