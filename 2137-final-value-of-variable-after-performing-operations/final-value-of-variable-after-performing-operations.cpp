class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int n=0;
        for(string x:operations){
            if(x[0]=='-' || x[2]=='-')
            n--;
            else
            n++;
        }
        return n;
    }
};