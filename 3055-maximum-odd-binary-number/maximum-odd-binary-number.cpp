class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int count1=0,count0=0;
        for(char x:s){
            if(x=='1')
            count1++;
            else
            count0++;
        }
        string result="";
        if(count1>1){
            result.insert(result.begin(),count1-1,'1');
            result.insert(result.end(),count0,'0');
            result.push_back('1');
        }
        else{
            result.insert(result.begin(),count0,'0');
            result.push_back('1');
        }
        return result;
    }
};