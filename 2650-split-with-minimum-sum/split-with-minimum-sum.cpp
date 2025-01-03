class Solution {
public:
    int splitNum(int num) {
        string x=to_string(num);
        sort(x.begin(),x.end());
        string a="",b="";
        for(int i=0;i<x.size();i++){
            if(i%2==0){
            a+=x[i];
            }
            else
            b+=x[i];
        }
        int result=stoi(a)+stoi(b);
        return result;
    }
};