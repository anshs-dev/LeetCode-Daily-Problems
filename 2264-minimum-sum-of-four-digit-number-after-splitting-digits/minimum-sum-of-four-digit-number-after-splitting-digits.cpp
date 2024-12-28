class Solution {
public:
    int minimumSum(int num) {
        string x=to_string(num);
        sort(x.begin(),x.end());
        int num1=((x[0]-'0')*10)+(x[2]-'0');
        int num2=(x[1]-'0')*10+(x[3]-'0');
        return num1+num2;
    }
};