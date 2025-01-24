class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1) return s;
        string result="";
        int jump=numRows*2-2;
        for(int i=0;i<numRows;i++){
        int start=i;
        if(i==0 || i==numRows-1){
            while(start<s.length()){
                result+=s[start];
                start+=jump;
            }
        }
        else{
            int temp=jump-i*2;
            while(start<s.length()){
                result+=s[start];
                start+=temp;
                if(start<s.length())
                result+=s[start];
                start+=jump-temp;
            }
        }
        }
        return result;
    }
};