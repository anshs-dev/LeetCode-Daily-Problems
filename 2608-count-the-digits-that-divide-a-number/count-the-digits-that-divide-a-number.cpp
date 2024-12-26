class Solution {
public:
    int countDigits(int num) {
        string x=to_string(num);
        int count=0;
        for(char a:x){
            if(num%(a-'0')==0)
            count++;
        }
        return count;

    }
};